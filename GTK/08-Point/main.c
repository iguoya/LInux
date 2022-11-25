#include <stdio.h>
#include <string.h>


int main(int argc, char **argv)
{
    printf("Hello World\n");
    
    
    char str[] = "hello tiger";
    char *ps = "hello tiger";
    
    char strA[20];
    char strB[20];
    
    strcpy(strA, str);
    strncpy(strB, str,  sizeof(strA)/sizeof(char));
    printf("%s(%x)  vs %s(%x)  -----> %s(%x)\n", strA, &strA,  strB, &strB,  ps,  &ps);
    
    
    char strC[10];
    printf("\n");
    
    
    for(int i = 0; i < sizeof(strC)/sizeof(char); ++i) {
        printf("%x (%x)\t", strC[i],   &(strC[i]));
    }
    printf("\n");
    
    memset(strC, 100, sizeof(strC));
    for(int i = 0; i < sizeof(strC)/sizeof(char); ++i) {
        printf("%x (%x)\t", strC[i],   &strC[i]);
    }
    printf("\n");
    
    
    
    char strD[10] = {};
        for(int i = 0; i < sizeof(strD)/sizeof(char); ++i) {
        printf("%x (%x)\t", strD[i],   &strD[i]);
    }
    printf("\n");
    
    return 0;
}
