#ifndef _4JAJKO_H_
#define _4JAJKO_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <getopt.h>
#include <sys/stat.h>
#include <string.h>
#include <limits.h>

unsigned int parseCmdOption(int argc, char *argv[]);
void send(const unsigned int number);
long int transform(const long int);

#endif //_4JAJKO_H_