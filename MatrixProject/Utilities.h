#ifndef UTILITIES_H_INCLUDED
#define UTILITIES_H_INCLUDED

typedef enum values {realNumbers, integerNumber};
float M1[5][5] = {{0}},M2[5][5] = {{0}},M3[5][5] = {{0}};
int groupNumber;

int validValue(int, int,const char*);
void fillMatrix(float**, int, int, int);
void menu();

#endif // UTILITIES_H_INCLUDED
