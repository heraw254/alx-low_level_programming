#include <stdio.h>

int main(void)
{
    int a[] = {98, 972, 101, 403, 972};
    int *p;

    p = a;
    *(p + 2) = 98; // added line of code
    printf("a[0] = %d\n", *p);
    printf("a[1] = %d\n", *(p + 1));
    printf("a[2] = %d\n", *(p + 2));
    printf("a[3] = %d\n", *(p + 3));
    printf("a[4] = %d\n", *(p + 4));
    return (0);
}
