#include  <stdlib.h>
#include <stdbool.h>

/*You are given an m x n integer matrix matrix with the following two properties:

Each row is sorted in non-decreasing order.
The first integer of each row is greater than the last integer of the previous row.

Given an integer target, return true if target is in matrix or false otherwise.


You must write a solution in O(log(m * n)) time complexity.
*/

bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target) {
    for(int i=0; i<matrixSize;i++){
        if(matrix[i][0]>target)return false;
        if(matrix[i][*matrixColSize-1]>=target)
            for(int j=*matrixColSize-1;j>=0;j--)
                if(matrix[i][j]==target)return true;
    }
    return false;
}