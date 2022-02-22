#include <stdio.h>
#include <stdlib.h>

int *create_vetor (int n)
{
    int *vetor;
    vetor = (int*) malloc(n*sizeof(int));
    return vetor;
}

void print_vetor(int *p, int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d\n", p[i]);
    }
}

int main()
{
    int count;
    scanf("%d", &count);

    int *vetor_novo = create_vetor(count);

    for(int i = 0; i < count; i++)
    {
        scanf("%d", &vetor_novo[i]);
    }

    print_vetor(vetor_novo, count);
    free(vetor_novo);

    return 0;
}