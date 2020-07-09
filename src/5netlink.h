#ifndef _5NETLINK_H_
#define _5NETLINK_H_

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>

void inetServer(const unsigned int);
void gt_send(const unsigned int);
unsigned int transform(unsigned int);
long int receive();

#endif //_5NETLINK_H_