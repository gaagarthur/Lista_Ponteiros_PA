#include <stdio.h>

int delta(int a, int b){return a-b;} // funcao para calcular diferenca entre numeros
    
int Sum(int a, int b){return a+b;} // funcao para calcular soma entre numeros

int main(void){ // funcao principal

    int x, y; // alocando duas variaveis tipo inteiro
    int (*func)(int, int);  // ponteiro para funcao recebe dois inteiros
                            // como argumento e retorna um inteiro
    scanf("%d %d", &x, &y );// input de 2 valores inteiros

    func = delta; // passando o endereco da funcao 'delta' para o ponteiro 'func'
        printf("Delta of %d e %d: %d\n", x, y, func(x, y));
    func = Sum; // passando o endereco da funcao 'Sum' para o ponteiro 'func'
        printf("Sum of %d e %d: %d\n\n", x, y, func(x, y));
}

