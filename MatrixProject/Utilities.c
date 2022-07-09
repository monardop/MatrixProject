#include <stdio.h>
#include <stdlib.h>
#include "Utilities.h"

int validValue(int bottom, int top, const char* msj) {
    int value;
    do{
        printf(msj);
        scanf("%d", &value);
    }while((value < bottom) || (value > top));
    return value;
}
void fillMatrix(float** Matrix, int typeValue, int row, int column) {
    if(typeValue == realNumbers) {
        float x;
        for(int i = 0; i<row; i++){
            for(int j = 0; j<column; j++){
                printf("Insert a value for the r %d c %d: ", i , j);
                scanf("%f", &x);
                *(*(Matrix + i)+j) = x;
            }
        }
    } else
    {
        int x;
        for(int i = 0; i<row; i++){
            for(int j = 0; j<column; j++){
                printf("Insert a value for the r %d c %d: ", i , j);
                scanf("%d", &x);
                *(*(Matrix + i)+j) = x;
            }
        }
    }
    
}
void showRealsMatrix(float** M, int row, int column) {
    for(int i = 0; i < row; i++) {
        for(int j = 0; j< column; j++) {
            printf("%.2f\t", *(*(M+i)+j));
        }
        printf("\n");
    }    
}
void showIntMatrix(float** M, int row, int column) {
    for(int i = 0; i < row; i++) {
        for(int j = 0; j< column; j++) {
            printf("%.0f\t", *(*(M+i)+j));
        }
        printf("\n");
    }
}

void menu() {
    float (*sumFunctions[4])(int,int) = {"UpperTriangularSum","LowerTriangularSum", "trace", "secondaryTrace"};
    void(*determineMatrixType[4])(int, int) = {"DiagonalMatrix", "SymmetricMatrix", "IdentityMatrix", "TransposeMatrix"};
    void(*showMatrix[2])(float**, int, int) = {"showRealsMatrix","showIntMatrix"};
}