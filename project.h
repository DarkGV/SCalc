#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define INCOMPATIBLE_TYPES 0x0000A
#define INCOMPATIBLE_SIZES 0x0000B

typedef int** MatrixInt;
typedef float** MatrixFloat;
typedef char** MatrixChar;

struct MatrixInt_Wrapper{
    MatrixInt matrixI;
    int l;
    int c;
};

int error;

MatrixInt createMatrix(int l, int c);
int insertValues(MatrixInt matrix, int l, int c, int* values, int size);
MatrixInt sumMatrix(struct MatrixInt_Wrapper m1, struct MatrixInt_Wrapper m2);
void parse(char** args, char* buffer);
void sum(int, int);
void sub(int, int);
void mul(int, int);
void division(int, int);
