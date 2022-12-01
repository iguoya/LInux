#include <stdio.h>

int main(int argc, char **argv)
{
    printf("Hello World\n");
    
    int num[] = {54, 53, 52, 51, 49, 1, 6, 71, 206};
    printf("%ld\n", sizeof(num)/sizeof(int));
    
    for(size_t i = 0; i < sizeof(num)/sizeof(int); ++i) {
        printf("%d\t", num[i]);
    }
    
    char str[] = "hello tiger, love 郭雅!!!";
    
    printf("\n%s\n", str+5);
    
    printf("\n%s----%d\n", str);
    char str1[5];
    str1[0] = 'H';
    str1[1] = 'e';
    str1[2] = 'l';
    str1[3] = 'l';
    str1[4] = 'o';
    
    printf("address: %d vs %d\n", str1, str);
    
//    str, 'e', 'l', 'l', 'o'};

    return 0;
}
