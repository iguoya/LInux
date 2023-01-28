#include <stdio.h>

int fabonacci(int n) {
    if(n <= 2) {
        return 1;
    }
    return fabonacci(n-1) + fabonacci(n-2);
}

int main(int argc, char **argv)
{
	printf("hello world\n");
    
//    char space[8*1024*1024];
    
//    fabonacci(100);
    for(int i = 1; i < 50; ++i) {
        printf("%d\t", fabonacci(i));
        if(i % 10 == 0) {
            printf("\n");
        }
    }
    printf("over\n");
    
	return 0;
}
