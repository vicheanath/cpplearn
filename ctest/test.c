#include <stdio.h>
#include <stdlib.h>

int main()
{
    int * p = malloc(sizeof(int)); int x = *p;
    int ** y = &p;

    printf("%d\n", x);
    *p = 1000;
    printf("%d\n", x);
    printf("%d\n", *y);
    return 0;
}