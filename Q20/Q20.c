#include <stdio.h>
#include <stdlib.h>// malloc() rand()
#include <time.h>  //time()

void mult_matrx(int** m1, int** m2, int** m3, int line1, int col2, int co_li_12 ){

    int temp=0;
//---------------math time + populate array 2------------------

for(int k=0; k<line1;k++){
    for(int i=0; i<co_li_12; i++){
        temp=0;
        for(int j=0; j<co_li_12; j++){
            temp = (m1[k][i] * m2[i][j])+temp ;
            
        }
        m3[k][i] = temp;
    }
}
}

int main(void){

int lines1, cl12, colun2;
int **A, **B, **C;

srand(time(NULL));
//--------------------------INPUTS------------------------------
printf("\nLinhas matriz 1: ");
scanf("%d", &lines1);
printf("\ncolunas matriz 1: ");
scanf("%d", &cl12);
printf("\ncolunas matriz 2: ");
scanf("%d", &colun2);
//---------------------allocate array 1-------------------------

A = malloc(lines1*sizeof(int*));//matriz aux 1
    A[0] = (int*) malloc(lines1*cl12*sizeof(int));//matriz 1
    for(int i=1; i<lines1; i++){// Fixar Ponteiros
       A[i] = A[i-1]+cl12;
    }
//---------------------populate array 1-------------------------

    for(int i=0; i<lines1; i++){
        for(int j=0; j<cl12; j++){
            A[i][j] = rand() % 30;;
        }
    }
//---------------------allocate array 2-------------------------

B = malloc(cl12*sizeof(int*));//matriz aux 2
    B[0] = malloc(cl12*colun2*sizeof(int));//matriz 2
    for(int i=1; i<cl12; i++){// Fixar Ponteiros
       B[i] = B[i-1]+colun2;
    }
//---------------------populate array 2-------------------------

    for(int i=0; i<cl12; i++){
        for(int j=0; j<colun2; j++){
            B[i][j] = rand() % 30;
        }
    }  
//---------------------allocate array 3-------------------------

C = malloc(lines1*colun2*sizeof(int*));//matriz 2
    C[0] = malloc(lines1*colun2*sizeof(int));//matriz 2
    for(int i=1; i<lines1; i++){// Fixar Ponteiros
       C[i] = C[i-1]+colun2;
    }
//---------------------show array A-----------------------------
printf("\nA:");
for(int i=0;i<lines1;i++){
    printf("\n");
    for(int j=0;j<cl12;j++){
        printf("%d ",A[i][j]);
    }
}
printf("\n\n");
//---------------------show array B-----------------------------
printf("B:");
for(int i=0;i<cl12;i++){
    printf("\n");
    for(int j=0;j<colun2;j++){
        printf("%d ",B[i][j]);
    }
}
//-------------------calling Math time--------------------------

mult_matrx(A, B, C, lines1, colun2, cl12);
printf("\n\n");
//---------------------show array C-----------------------------
printf("C:");
for(int i=0;i<lines1;i++){
    printf("\n");
    for(int j=0;j<colun2;j++){
        printf("%d ",C[i][j]);
    }
}
printf("\n\n");
}