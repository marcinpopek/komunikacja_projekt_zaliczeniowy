#ifndef	__PROGRAM_2
#define __PROGRAM_2

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <getopt.h>
#include <sys/stat.h>
#include <string.h>

long int parse(int argc, char* argv[]);
void send(unsigned int number);
unsigned int transform(unsigned int number);

#endif //__PROGRAM_2