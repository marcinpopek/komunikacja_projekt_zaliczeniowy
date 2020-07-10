#include "2argument.h"
#include "gluchytelefon.h"





int main() {

	displayInfo(INTRO, "#####     2     #####   next prime number");
    char buffer[BUFFER_SIZE];

    unsigned int number=receive();
    sprintf(buffer, "%ld", number);
    displayInfo(INPUT, buffer);
    if(!checkRange(number))
    {
        displayInfo(ERROR, TXT_ERROR_INPUT_OUT_OF_RANGE);
        return 0;
    }

    number=transform(number);
    if(!checkRange(number))
    {
        displayInfo(ERROR, TXT_ERROR_OUTPUT_OUT_OF_RANGE);
        return 0;
    }
    sprintf(buffer, "%ld", number);
    displayInfo(OUTPUT, buffer);

    send(number);

	return 0;
}

unsigned int receive()
{
	int fd;
    char buffer[sizeof(int)*8];
	fd=open(FIFO_PATH,O_RDONLY);
    if( read(fd,buffer,sizeof(int)*8) < 0 )
    {
        perror("Couldn't read from FIFO");
        exit(0);
    }
	close(fd);
    unlink(FIFO_PATH);

    return atol(buffer);
}

bool isPrime(const unsigned long number)
{
    if(number<=1) return false;
    if(number==2) return true;
    for(unsigned int i=2; (i*i)<=number; ++i)
    {
        if(number%i==0) return false;
    }
    return true;
}

unsigned int transform(unsigned int number) {

	bool prime=false;
    while(!prime)
    {
        number++;
        if(!checkRange(number)) return -1;
        if(isPrime(number)) prime=true;
    }
    return number;
}

void send(const unsigned int number);
