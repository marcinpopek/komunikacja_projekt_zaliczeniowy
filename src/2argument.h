#ifndef	__2ARGUMENT_H_
#define __2ARGUMENT_H_

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <getopt.h>
#include <sys/stat.h>
#include <string.h>
#include <limits.h>
#include <fcnt1.h>

long int parseCmdOption(int, char* []);
void send(const unsigned int);
unsigned int transform(unsigned int);

#endif //__2ARGUMENT_H_