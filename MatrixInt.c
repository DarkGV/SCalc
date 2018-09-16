#include "project.h"

MatrixInt createMatrix(int l, int c){
    MatrixInt matrix;
    int i;

    matrix = (MatrixInt) malloc(l *  sizeof(int*));

    for(i = 0; i < l; i++){
        matrix[i] = (int*) malloc(c*sizeof(int));
    }
    return matrix;
}

int insertValues(MatrixInt matrix, int l, int c, int* values, int size){
    int cont = 0, i, j;

    if(size != l*c){
        error = INCOMPATIBLE_SIZES;
        return -1;
    }

    cont = 0;

    for(i = 0; i < l; i++){
        for(j = 0; j < c; j++){
            matrix[i][j] = values[cont];
            cont++;
        }
    }
    return 0;
}

MatrixInt sumMatrix(struct MatrixInt_Wrapper m1, struct MatrixInt_Wrapper m2){
    MatrixInt res;
    int i, j;
    if(m1.l == m2.l && m1.c == m2.c){
        res = createMatrix(m1.l, m2.c);
        for(i = 0; i < m1.l; i++){
            for(j = 0; j < m1.c; j++){
                res[i][j] = m1.matrixI[i][j] + m2.matrixI[i][j];
            }
        }
        return res;
    }
    error = INCOMPATIBLE_SIZES;
    return NULL;
}