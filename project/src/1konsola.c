#include "1konsola.h"
#include "gluchytelefon.h"

int main() {

	signal(SIGINT, breakHandler);


	return 0;
}

void breakHandler() {

	printf("\nShutting down...\n");
    exit(0);
}

unsigned int transform(unsigned int) {
	return number % 10;
}