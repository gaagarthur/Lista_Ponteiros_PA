#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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


int compare(const void * x, const void * y){
    return ( *(int*)x - *(int*)y );
}

int main(void){
    int num_elem;
    int *ptr;
    time_t t;
    clock_t start1, end1, start2, end2;
    double levou1, levou2;
//---------------------------------------------------------------------------
    scanf("\n%d", &num_elem);// receber numero de elemetos do vetor
//---------------------------------------------------------------------------
    ptr = malloc(num_elem*sizeof(int));//alocando memoria dinamicamente
//---------------------------------------------------------------------------
    srand((unsigned) time(&t));// cria semente para gerador de numeros
//---------------------------------------------------------------------------
void (*ord)(int*, int) = &bubble;
start1 = clock();
//---------------------------------------------------------------------------
for(int j=0; j<10000000; j++){    

    for(int i=0; i<num_elem; i++){//preenchendo vetor
      ptr[i] = rand() % 100;
    }

    ord(ptr,num_elem);
}

//---------------------------------------------------------------------------
    end1 = clock();
    start2 = clock();
//---------------------------------------------------------------------------
for(int j=0; j<10000000; j++){  
    for(int i=0; i<num_elem; i++){//preenchendo vetor
      ptr[i] = rand() % 100;
    }
    
    qsort(ptr, num_elem, sizeof(int),compare);
}
//---------------------------------------------------------------------------
free(ptr);
ptr = NULL;
//---------------------------------------------------------------------------
    end2 = clock();
    levou1 = (double)(end1 - start1) / CLOCKS_PER_SEC;
    levou2 = (double)(end2 - start2) / CLOCKS_PER_SEC;
//---------------------------------------------------------------------------
    printf("\n ordenada qsort: %lf",levou1);
    printf("\n ordenada proprio: %lf",levou2);
    printf("\n Proporcao proprio/qsort: %lf\n",(levou2/levou1));
//---------------------------------------------------------------------------
printf("\n");
}