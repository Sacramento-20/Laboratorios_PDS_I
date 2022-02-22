// lab 1
#include <stdio.h>
#include <stdlib.h>

// documentar codigo.

int soma_vetor(int indice, int vetor[], int tamanho)
{
    if (indice == tamanho-1)
        return vetor[indice];
    else
        return vetor[indice] + soma_vetor(indice+1, vetor, tamanho);

}



int main()
{
    int tamanho;
    scanf("%d", &tamanho);
    
    int *vetor = (int *) malloc(tamanho*sizeof(int));
    
    for (int i=0; i < tamanho; i++)
    {
        scanf("%d", &vetor[i]);
    }

    printf("%d",soma_vetor(0,vetor, tamanho));



    return 0;
}