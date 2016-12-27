#include <stdio.h>
#include <stdlib.h>

void inplace_swap(int *x, int *y)
{
    *y = *x ^ *y;
    *x = *x ^ *y;
    *y = *x ^ *y;
}

vid reverse_array(int a[], int cnt)
{
    int first, last;
    for (first = 0, last = cnt -1;
            first <= last;
            first++, last--) 
    {
        inplace_swap(&a[first], &a[last]);
    }
}

int main(int argc, char **argv) 
{
    print_array(atoi(argv[1]));
    reverse_array(atoi(argv[1]), atoi(argv[2]));
    print_array(atoi(argv[1]));
    return 0;
}

void print_array(int a[])
{
    for (int i = 0; i < sizeof(a); i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
