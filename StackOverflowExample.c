#include <stdio.h>
#include <stdlib.h>

// int func(int a)
// {
//     if(a==0)
//     return 0;
//     a+=1;
//     printf("%d\n",a);
//     func(a);
// }
int main(void)
{
    // int a = 5;
    // func(a);

    /*! Heap memory demonstration. */
    int *z;
    z = (int*)malloc(sizeof(int)); // allocated memory in heap

    *z = 100;
    printf("%x\n", z);
    printf("%d\n", *z);
    free(z); // clears memory from heap
    printf("%d\n", *z); // now there is no data in the heap memory
}