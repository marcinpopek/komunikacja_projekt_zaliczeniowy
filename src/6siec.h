#ifndef _6SIEC_H_
#define _6SIEC_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <netdb.h>
#include <string.h>
#include <sys/socket.h>

void gt_send(const long int);
long int receive();

#endif //_6SIEC_H_