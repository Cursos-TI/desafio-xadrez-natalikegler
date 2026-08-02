#include <stdio.h>

int main()
{

    // - Simular movimento Cavalo: 2 para baixo, 1 esquerda

    int i, j;

    for (i = 1; i <= 2; i++)
    {
        printf("Baixo, ");
        while (i == 2)
        {
            printf("Esquerda.\n");
            i++;
        }
    }
}