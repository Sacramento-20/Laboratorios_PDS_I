#include <stdio.h>

struct evento
{
    char evento[50];
    char local[50];
    int dia;
    int mes;
    int ano;
};

void escreve(struct evento eventos[], int n)
{
    
    for (int i = 0; i < n; i++)
    {
        scanf("%s %s %d %d %d", eventos[i].evento, eventos[i].local, &eventos[i].dia, &eventos[i].mes, &eventos[i].ano);

    }


}

void imprime(struct evento eventos[], int n, int dia, int mes, int ano)
{
    int valor = 0;
    for (int i = 0; i < n; i++)
    {
        if(dia == eventos[i].dia && mes == eventos[i].mes && ano == eventos[i].ano)
        {
            printf("%s %s ", eventos[i].evento, eventos[i].local);
            printf("\n");
            valor++;
        }
    }
    if (valor == 0)
    {
            printf("Nenhum evento encontrado!");
    }

}

int main()
{
    int n, dia_target, mes_target, ano_target;
    //defini o tamanho do vetor
    scanf("%d", &n);
    // definir o tamanho da struct
    struct evento eventos[n];

    escreve(eventos, n);

    scanf("%d %d %d", &dia_target, &mes_target, &ano_target);
    printf("\n");
    imprime(eventos, n, dia_target, mes_target, ano_target);


}