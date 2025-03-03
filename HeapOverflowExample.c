/*************************************************
*Author: Nishant Patra
*************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() 
{
    while(1)
    {
        int *z;
        z = (int*)malloc(sizeof(int)); // aloocating memory without making it free later, leads to heap overflow
        printf("%x\n",z);
    }
    return 0;
}