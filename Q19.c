#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void sum_vecs(int* V1, int* V2, int* V3, int size){

    printf("  = ");
    for(int i=0; i<size; i++){
        int aux =V1[i] + V2[i];
        V3[i] = aux;//preenchendo o vetor
        printf(" %d",V3[i]);//imprimindo vetor resultado
    }

}

int main(void){

    int num_ele, *Vec1, *Vec2, *Vec3;
    time_t t;

    scanf("\n%d", &num_ele);// receber numero de elemetos do vetor

    Vec1 = malloc(num_ele * sizeof(int));
    Vec2 = malloc(num_ele * sizeof(int));
    Vec3 = malloc(num_ele * sizeof(int));

    srand((unsigned) time(&t));
//---------------------------------------------------------------------------
    for(int i=0; i<num_ele; i++){//preenchendo os vetores
      Vec1[i] = rand() % 100;
      Vec2[i] = rand() % 100;
    }

    for(int i=0; i<num_ele; i++){//imprimi vetor 1 original
        printf(" %d",Vec1[i]);
    }
    printf("  + ");
    for(int i=0; i<num_ele; i++){//imprimi vetor 2 original
        printf(" %d",Vec2[i]);
    }

    void (*ptr_sum)(int*, int*, int*, int);
    ptr_sum = &sum_vecs;

    ptr_sum(Vec1, Vec2, Vec3, num_ele);

}
