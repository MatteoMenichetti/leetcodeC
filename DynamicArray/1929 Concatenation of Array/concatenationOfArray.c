#include <stdlib.h>
#include <stdio.h>

int* getConcatenation(int* nums, int numsSize, int* returnSize) {
    int * a = (int *) calloc(numsSize*2, sizeof(int));

    *returnSize=numsSize*2;

    for(int i=0; i< numsSize; i++) {
        a[i] = nums[i];
        a[i+numsSize]= nums[i];
    }
    return a;
}