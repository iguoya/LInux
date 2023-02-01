#include <stdio.h>
#include "../stack/stack.h"

int main() {
    printf("背包问题!\n");

    int items[][5] = {
            {1,2,3,4,5},
            {6,7,8,9,10},
            {11,12,13,14,15},
            {16,17,18,19,20},
            {21,22,23,24,25}
    };
    int count = 0;
    for(int i = 0; i < 5; ++i) {
        printf("item[%d]: add: %p\n", i, &items[i]);
        for(int j =0; j< 5; ++j) {
            printf("%d(%p)\t", items[i][j], &items[i][j]);
        }
        printf("\n");
    }




//
//    int **b = items;
//    for(int i = 0; i < 5; ++i) {
//        for(int j =0; j< 5; ++j) {
//            ++count;
//            printf("%d(%p--%p)\t", items[i][j], ++b);
//
//            if(count % 4 == 0) {
//                printf("\n");
//            }
//        }
//    }

    return 0;
}