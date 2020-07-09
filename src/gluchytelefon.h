#ifndef __GLUCHYTELEFON_H_
#define __GLUCHYTELEFON_H_

#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

typedef enum infoType
{
    ERROR,
    INPUT,
    INTRO,
    OK,
    OUTPUT

}infoType;

bool checkRange(const long int);
void dysplayBits(unsigned int);
void displayInfo(infoType, char[]);

#endif //__GLUCHYTELEFON_H_
