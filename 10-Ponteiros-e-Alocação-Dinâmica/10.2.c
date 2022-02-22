#include <stdio.h>
#include <stdlib.h>

int *create_matriz(int linha, int coluna)
{
    int *matriz;
    matriz = (int*) malloc(linha*coluna*sizeof(int));

    return matriz;
}

void preenche_matiz(int *matriz, int linha, int coluna)
{
    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            scanf("%d", &matriz[i*coluna + j]);
        }
        
    }
    
}

void imprime_matiz(int *matriz, int linha, int coluna)
{
    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            printf("%3d", matriz[i*coluna + j]);
        }
        printf("\n");
    }
    
}

int main()
{
    int linha = 3, coluna = 3;
    scanf("%d", &linha);
    scanf("%d", &coluna);

    int *matriz = create_matriz(linha, coluna);

    preenche_matiz(matriz, linha, coluna);

    printf("\n");
    imprime_matiz(matriz, linha, coluna);

    free(matriz); 
    return 0;
}