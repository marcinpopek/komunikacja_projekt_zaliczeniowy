#include "2argument.h"
#include "gluchytelefon.h"

int main() {

	displayInfo(INTRO, "#####     2     #####   bit reverse");
    char buffer[BUFFER_SIZE];

    unsigned int number = parseCmdOption(argc, argv);
    if (!checkRange(number))
    {
        displayInfo(ERROR, TXT_ERROR_INPUT_OUT_OF_RANGE);
        return 0;
    }
    sprintf(buffer, "%ld", number);
    displayInfo(INPUT, buffer);
    displayBits(number);

    unsigned int reverse = transform((unsigned int)number);
    displayBits(reverse);
    sprintf(buffer, "%u", reverse);
    displayInfo(OUTPUT, buffer);

    send(reverse);

	return 0;
}

unsigned int parseCmdOption(int argc, char *argv[]) {

	int param;
    long int number = 0;
    while ((param = getopt(argc, argv, "hi:")) != -1)
    {
        switch (param)
        {
        case 'i': // input
            number = atol(optarg);
            return number;
            break;

        case 'h': // help
        default:
            printf("Usage:\n\t%s -i [0-%u]\n", argv[0], UINT_MAX);
            exit(0);
            break;
        }
    }
    return -1;
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
