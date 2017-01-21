#include <stdio.h>

typedef unsigned char *byte_pointer;
//int main()
//{
  //  long i = (1L << 32) + 1;
   // printf("%d\n", (unsigned)i);	
   // show_bytes((byte_pointer) &i, sizeof(i));
   // return 0;
//}

void show_bytes(byte_pointer start, size_t length)
{
    int i;
    
    for (i = 0; i < length; i++)
    {
        printf(" %.2x", start[i]);
    }
    printf("\n");
}

int main() 
{
    long i = 1L << 32;
    printf("%d\n", (unsigned)i);
    show_bytes((byte_pointer) &i, sizeof(i));
    return 0;
}
