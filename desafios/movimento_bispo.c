#include <stdio.h>

int main()
{
    // Desafio 1: Simular movimento Bispo: diagonal (cima e direita)

    // Desafio 2: loops aninhados. Externo vertical e interno horizontal

    int numero_movimentos = 1;
    int i, j;

    printf("Bispo vai se movimentar %dx!\n", numero_movimentos);

    for (i = 1; i <= numero_movimentos; i++)
    {
        printf("Movimento %d: Cima e ", i);
        for (j = 1; j == 1; j++)
        {
            printf("Direita\n");
            j++;
        }
    }
}