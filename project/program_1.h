#ifndef __PROGRAM_1
#define __PROGRAM_1

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>

void send(unsigned int number);
long int modify(long int number);
void handler();

#endif //__PROGRAM_1