#include <stdio.h>

void movimentar_rainha(int numero_movimentos)
{
    if (numero_movimentos > 0)
    {
        movimentar_rainha(numero_movimentos - 1);
        printf("Movimento %d: Esquerda\n", numero_movimentos);
    }
}

int main()
{

    // Desafio 1: simular movimento da rainha: 8 casas p/ esquerda

    // Desafio 2: use recursividade
    int numero_movimentos = 8;
    printf("Rainha vai se movimentar %dx para a esquerda!\n", numero_movimentos);
    movimentar_rainha(numero_movimentos);
}