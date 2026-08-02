#include <stdio.h>

int main()
{

    // Desafio 1: Simular movimento Cavalo: 2 para baixo, 1 esquerda

    // Desafio 2: loops mais complexos. 2 para cima e 1 direita (var multiplas e cond avançadas)

    int i, j;
    int numero_movimentacoes = 1;

    printf("Cavalo vai se movimentar %dx!\n", numero_movimentacoes);

    for (i = 1, j = 1; i <= numero_movimentacoes + 1; i++, j++)
    {
        printf("Cima, ");
        if (j == 2)
        {
            printf("Direita. \n");
        }
    }
    return 0;
}