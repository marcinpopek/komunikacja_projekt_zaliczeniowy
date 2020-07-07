#include "program_1.h"
#include "common.h"

int main() {

	signal(SIGINT, handler);

	/*unsigned int number = 0;

	while(1)
	{
		printf("Enter a number /0 - 4,294,967,295/: %u");
		scanf("%u", &number);
	}*/

	return 0;
}

void handler() {
	printf("\n");
	exit(0);
}

unsigned int modify(unsigned int number) {
	return number % 10;
}