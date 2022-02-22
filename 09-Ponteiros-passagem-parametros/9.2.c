#include <stdio.h>


void escreve(int *vet, int n)
{
    vet[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &vet[i]);
    }


}

void imprime(int *vet, int n)
{

    for (int i = 0; i < n; i++)
    {
        printf("%d ", vet[i]);
    }

}

void multiplica(int *vet, int n, double escalar)
{

    for (int i = 0; i < n; i++)
    {
        vet[i] = vet[i]*escalar;
        printf("%d ", vet[i]);
        vet[i] = vet[i]*(1/escalar);
    }

}

int main()
{
    // tamanho do vetor
    int n;
    scanf("%d", &n);
    // vetor
    int vet[n];
    escreve(vet, n);
    // multiplica
    double escalar;
    scanf("%lf", &escalar);
    printf("\n");
    // funções
    imprime(vet, n);
    printf("\n");
    multiplica(vet, n, escalar);
    printf("\n");
    imprime(vet, n);

    return 0;
}
