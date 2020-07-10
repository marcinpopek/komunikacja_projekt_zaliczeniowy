#ifndef __3PIPE_H_
#define __3PIPE_H_

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <stdbool.h>
#include <fcntl.h>

bool isPrime(const unsigned long);
void send(const unsigned int);
unsigned int transform(unsigned int);
unsigned int recive();

#endif //__3PIPE_H_