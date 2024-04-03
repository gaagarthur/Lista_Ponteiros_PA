#include <stdio.h>
#include <stdlib.h>

/*A função deve receber 6 argumentos: os ponteiros para as matrizes A, B e C,
 o número de linhas e colunas de A e o número de colunas de B (assuma que o
  número de coluna de A é igual ao número de linhas de B).*/

int** mult_matrx(int** m1, int** m2, int* m3, int line1, int col2, int co_li_12 ){

    int temp=0;

for(int k=0; k<line1;k++){
    for(int i=0; i<co_li_12; i++){
        temp=0;
        for(int j=0; j<col2; j++){
            temp = (m1[k][i] * m2[i][j])+temp ;
            m3[i][j] = temp;
        }
        
    }

}

int main(void){

int lines1=3, cl12=2, colun2=3;
int **A, **B, **C;

A = (int**) malloc(lines1*sizeof(int));//matriz aux 1
    A[0] = (int*) malloc(lines1*cl12*sizeof(int));//matriz 1
    for(int i=1; i<lines1; i++){// Fixar Ponteiros
       A[i] = A[i-1]+cl12;
    }
printf("\n");int u=1;
    for(int i=0; i<lines1; i++){
        for(int j=0; j<cl12; j++){
            A[i][j] = u;
            printf("%d ",A[i][j]);
            u++;
        }
    }
printf("\n");
B = malloc(cl12*sizeof(int));//matriz aux 2
    B[0] = malloc(cl12*colun2*sizeof(int));//matriz 2
    for(int i=1; i<cl12; i++){// Fixar Ponteiros
       B[i] = B[i-1]+colun2;
    }

    for(int i=0; i<cl12; i++){
        for(int j=0; j<colun2; j++){
            B[i][j] = rand() % 100;
        }
    }
        
C = malloc(lines1*colun2*sizeof(int));//matriz 2
    C[0] = malloc(lines1*colun2*sizeof(int));//matriz 2
    for(int i=1; i<lines1; i++){// Fixar Ponteiros
       C[i] = C[i-1]+colun2;
    }



//mult_matrx(A, B, C, lines1, colun2, cl12);

}