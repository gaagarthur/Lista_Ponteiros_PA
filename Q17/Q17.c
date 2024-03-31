#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//leia n valores do tipo float e os apresente em ordem crescente.

void bubble(int* vec_p, int n_ele){
for(int j =0; j<n_ele;j++){
        for(int i=0; i<(n_ele-1); i++){

         if(vec_p[i]>vec_p[i+1]){
            int holder = vec_p[i];
            vec_p[i] = vec_p[i+1];
            vec_p[i+1] = holder;
        }
    }
}

}

int main(void){
    int num_elem;
    int *ptr;
    time_t t;
//---------------------------------------------------------------------------
    scanf("\n%d", &num_elem);// receber numero de elemetos do vetor
//---------------------------------------------------------------------------
    ptr = malloc(num_elem*sizeof(int));//alocando memoria dinamicamente
//---------------------------------------------------------------------------
    srand((unsigned) time(&t));
//---------------------------------------------------------------------------
    for(int i=0; i<num_elem; i++){//preenchendo vetor
      ptr[i] = rand() % 100;
    }
//---------------------------------------------------------------------------
    printf("\n original: ");
    for(int i=0; i<num_elem; i++){//imprimi vetor original
        printf(" %d",ptr[i]);
    }
//---------------------------------------------------------------------------
//bubble sorting
    void (*ordena)(int*, int) = &bubble;
    ordena(ptr,num_elem);
//---------------------------------------------------------------------------
    printf("\n ordenada: ");//imprimi vetor novo
    for(int i=0; i<num_elem; i++){
        printf(" %d",ptr[i]);
    }
//---------------------------------------------------------------------------
free(ptr);
printf("\n");
}
