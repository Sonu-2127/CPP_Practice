#include <stdio.h>
#include <stdlib.h>


void func1(void)
{
    int* ptr = (int*)malloc(sizeof(int));
    *ptr = 42;
    printf("%d\n", *ptr);
    free(ptr);
    ptr = NULL;
    printf("%d", *ptr);
}

int* func2(void)
{
    static int x = 5;
    return &x;
}

int main(void)
{
    int* p = func2();
    printf("%d", *p);
    return 0;
}