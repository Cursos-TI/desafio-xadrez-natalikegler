#include <stdio.h>

void movimentar_torre(int numero_movimentos)
{
    if (numero_movimentos > 0)
    {
        movimentar_torre(numero_movimentos - 1);
        printf("Movimento %d: Direita\n", numero_movimentos);
    }
}

int main()
{

    // Desafio 1: Simular movimento da torre 5 casas p/ direita

    // Desafio 2: use recursividade

    int numero_movimentos = 5;
    printf("Torre vai andar %dx para a direita \n", numero_movimentos);
    movimentar_torre(numero_movimentos);
}