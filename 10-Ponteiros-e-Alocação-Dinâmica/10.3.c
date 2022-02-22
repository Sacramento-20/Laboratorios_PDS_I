#include <stdio.h>
#include <stdlib.h>


int *create_vetor(int n)
{
    int *vetor;
    vetor = (int*) malloc(n*sizeof(int));
    return vetor;
}

int *sum_vetor(int *vetor_um, int *vetor_dois, int n)
{
    int *vetor_soma;
    vetor_soma = (int*) malloc(n*sizeof(int));

    for (int i = 0; i < n; i++)
    {
        vetor_soma[i] = vetor_um[i] + vetor_dois[i];
    }
    return vetor_soma;
}

int print_vetor(int *p, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", p[i]);
    }
    
}

int main()
{

    int count;
    scanf("%d", &count);
    
    int *vetor_a = create_vetor(count);
    
    for(int i = 0; i < count; i++)
    {
        scanf("%d", &vetor_a[i]);
    }
    
    int *vetor_b = create_vetor(count);
    
    for(int i = 0; i < count; i++)
    {
        scanf("%d", &vetor_b[i]);
    }
    

    int *soma = sum_vetor(vetor_a,vetor_b, count);
    print_vetor(soma, count);

    free(vetor_a);
    free(vetor_b);
    free(soma);
}