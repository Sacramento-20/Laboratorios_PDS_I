#include <stdio.h>

int main()
{
    int n, resultado = 0;

    scanf("%d", &n);

    for(int i = 0; i <= n; i++)
    {
        resultado += i;

    }

    printf("%d\n", resultado);


    return 0;
}