#include <stdio.h>

int main(int argc, char **argv)
{
    printf("Hello World\n");
    
//    101    01001100   0101 0110   0011 1000
        int i = 123456789;
        short *p = (short *)&i;
        char *c = (char *)&i;
        
        printf("%d--%x\n", *(++p), *(++p));
//        6ff53ae969c98b48b9fa3c2b8a0daa48bb34f0b9
        printf("%d   %d    %d    %d\n",  c[0], c[1], c[2], c[3]);
        
        int x = 555;
        int y = 666;
        
        printf("%x,  %x\n", &x, &y);
        
        printf("%d ,  %d\n",  x,  *(&x-1));
        
        printf("%d ,  %d\n",  x,  *(&x+1));
        
        int num[] = {1, 7, 5, 8, 9, 10, 11, 12, 13, 14, 15, 16, 18};
        printf("num size: %d\n", sizeof(num)/sizeof(int));
        
        
        
//        char *
    return 0;
}
