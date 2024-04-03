#include <stdio.h>
#include <stdlib.h> //rand()
#include <time.h>   //time()
#include <math.h>   //pow()

int main(void){

unsigned char m[8][8];
unsigned long int signal=0;
int power=64;

//---------------------populate array-------------------------
// codigo para popular com 1's e 0's
    srand(time(NULL));  

    for(int i=0; i<8; i++){
       for(int j=0; j<8; j++){
        m[i][j] = rand()%2;
        }
    }
//---------------------show array-----------------------------
    printf("\n\n    Array:\n");
    for(int i=0; i<8; i++){
       printf("\n");
       for(int j=0; j<8; j++){
           printf("%d ",m[i][j]);
       }
    }
//---------------------Math time------------------------------
// primeira potencia 2^power * posicao, power comeca em
// 63 e diminui 1 a cada iteracao. posicao anda do
// elemento 1x1 ate o elemento 8x8, percorrendo linha a linha.

    for(int i=0; i<8; i++){
       for(int j=0; j<8; j++){
           power--;
            signal = signal + (m[i][j]*pow(2,power));

       }
    }
//---------------------show integer---------------------------
    printf("\n\nint a ser enviado: %lu\n\n\n", signal);

}

