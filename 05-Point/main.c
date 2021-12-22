#include <stdio.h>

int main(int argc, char **argv)
{
    printf("Hello World\n");
    
    int i = 5;
    printf("%d\n", &i);
//    printf("%ld\n", &i);
        int j = 10;
    printf("%d\n", &j);
    
    int* iAddress = &i;
    printf("%d, %d\n", *iAddress, iAddress);
    return 0;
}
