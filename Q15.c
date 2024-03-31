#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//leia n valores do tipo float e os apresente em ordem crescente.

int compare(const void * x, const void * y){
    return ( *(int*)x - *(int*)y );
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
    qsort(ptr, num_elem, sizeof(int),compare);//comparacao e troca
//---------------------------------------------------------------------------
    printf("\n ordenada: ");//imprimi vetor novo
    for(int i=0; i<num_elem; i++){
        printf(" %d",ptr[i]);
    }
//---------------------------------------------------------------------------
printf("\n");
}
