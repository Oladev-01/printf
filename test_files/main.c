#include <stdio.h>
int main()
{
    int num = 100;
    int *p = &num;
    int len = printf("what %p", p);
    printf("\n%d\n", len);
    return (0);
}