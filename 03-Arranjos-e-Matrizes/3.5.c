#include <stdio.h>

int main()
{
    int linhas, colunas, i, j, maior = 0;

    scanf("%d", &linhas);
    scanf("%d", &colunas);

    int mA[linhas][colunas];

    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            scanf("%d", &mA[i][j]);
        }
    }
    // Pegar o maior da matriz
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            if (mA[i][j] > maior)
            {
                maior = mA[i][j];
            }
        }
    }
    printf("%d \n", maior);
    return 0;
}