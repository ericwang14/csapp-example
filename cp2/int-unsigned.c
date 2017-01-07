#include <stdio.h>

int main()
{
    int tx = -1;
    unsigned ux = 2147483648;
    
    printf("x = %u = %d\n", tx, tx);
    printf("x = %u = %d\n", ux, ux);

    ux = tx;
    printf("x = %u\n", ux);

    return 0;
}
