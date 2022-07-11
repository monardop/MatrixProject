#include <stdio.h>
#include <stdlib.h>
#include "SumFunctions.h"
#include "Utilities.h"

void UpperTriangularSum(int matrixSize, int typeNumber){
    float M[5][5] = {{0}}, ans = 0;
    fillMatrix(M, matrixSize, matrixSize);
    showMatrix(M, matrixSize, matrixSize, typeNumber);
    for(int i = 1; i<= matrixSize; i++){
        for(int j= 1; j<= matrixSize; j++){
            if(i==j || i<j)
                ans +=M[i][j];
        }
    }
    if(typeNumber == 1){
        printf("Your answer is: %.3f", ans);
    }else
    {
        printf("Your answer is: %.0f", ans);
    }
    return;
}
void LowerTriangularSum(int matrixSize, int typeNumber){
    float M[5][5] = {{0}}, ans = 0;
    fillMatrix(M, matrixSize, matrixSize);
    showMatrix(M, matrixSize, matrixSize, typeNumber);
    for(int i = 1; i<= matrixSize; i++){
        for(int j= 1; j<= matrixSize; j++){
            if(i==j || i>j)
                ans +=M[i][j];
        }
    }
    if(typeNumber == 1){
        printf("Your answer is: %.3f", ans);
    }   else
    {
        printf("Your answer is: %.0f", ans);
    }
    return; 
}
void trace(int matrixSize, int typeNumber){
    float M[5][5] = {{0}}, ans = 0;
    fillMatrix(M, matrixSize, matrixSize);
    showMatrix(M, matrixSize, matrixSize, typeNumber);
    for(int i = 1; i<= matrixSize; i++){
        for(int j= 1; j<= matrixSize; j++){
            if(i==j)
                ans +=M[i][j];
        }
    }
    if(typeNumber == 1){
        printf("Your answer is: %.3f", ans);
    }else
    {
        printf("Your answer is: %.0f", ans);
    }
    return;
}
void secondaryTrace(int matrixSize, int typeNumber){
    float M[5][5] = {{0}}, ans = 0;
    fillMatrix(M, matrixSize, matrixSize);
    showMatrix(M, matrixSize, matrixSize, typeNumber);
    for(int i = 1; i<= matrixSize; i++){
        for(int j= 1; j<= matrixSize; j++){
            if(i+j == matrixSize + 1)
                ans +=M[i][j];
        }
    }
    if(typeNumber == 1){
        printf("Your answer is: %.3f", ans);
    }else
    {
        printf("Your answer is: %.0f", ans);
    }
    return;
}