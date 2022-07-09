#include <stdio.h>
#include <stdlib.h>
#include "Utilities.h"

int validValue(int bottom, int top, const char* msj) {
    int value;
    do{
        printf(msj);
        print("Your answer: ");
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
    void (*sumFunctions[4])(int,int) = {"UpperTriangularSum","LowerTriangularSum", "trace", "secondaryTrace"};
    void (*determineMatrixType[4])(int, int) = {"DiagonalMatrix", "SymmetricMatrix", "IdentityMatrix", "TransposeMatrix"};
    void (*showMatrix[2])(float**, int, int) = {"showRealsMatrix","showIntMatrix"};
    int menuOP, i, j;

    printf("Welcome to the matrix project.\n",
    "Which group of numbers will you use?\n");
    groupNumber = validValue(1,2,"1- Reals\n2- Integer.\n") - 1;
    printf("Do you want to determinate which kind of matrix do you have, or do you need to make an operation first?");
    menuOP =  validValue(1,2,"1- Just determinate the type\n2- Show operations.\n");
    if (menuOP == 1) {
        menuOP = validValue(0,4,"0- Is it diagonal?\n1- Is it symmetrical?\n2- Is it the identity matrix?\n3- Transpose matrix\n");
        i = validValue(1,5,"How many rows does your matrix have? 1-5");
        j = validValue(1,5,"How many columns does your matrix have? 1-5");
        determineMatrixType[menuOP](i, j);
    } else
    {
        menuOP = validValue(0,4,"0- Upper triangular sum\n1- Lower triangular sum\n2- Trace\n3- Secondary trace\n ");
        i = validValue(1,5,"How many rows does your matrix have? 1-5");
        j = validValue(1,5,"How many columns does your matrix have? 1-5");
        sumFunctions[menuOP](i, j);
    }
    

}