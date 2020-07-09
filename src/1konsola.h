#ifndef __1KONSOLA_H_
#define __1KONSOLA_H_

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>
#include <limits.h>

void send(const unsigned int);
unsigned int transform(unsigned int);
void breakHandler();

#endif //__1KONSOLA_H_