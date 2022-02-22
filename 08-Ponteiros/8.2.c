#include <stdio.h>
#include <stdlib.h>


int main()
{
    int numero,primo_anterior,primo_proximo;

    // printf("Informe o numero: ");
    scanf("%d",&numero);
    printf("\n");

    // primo anterior
    for (int i = numero-1; i >= 0; i--)
    {
        int d = 2,EhPrimo=1;		

        if (i <= 1)
            EhPrimo = 0;

        while (EhPrimo == 1 && d <= i / 2) {
            if (i % d  == 0)
                EhPrimo = 0;
                d = d + 1;
            }

        if (EhPrimo == 1)
        {
            // printf("%d e' primo \n", i);
            primo_anterior = i;
            break;
        }
    }
    
    
    // primo posterior
    for (int i = numero+1; i != 0; i++)
    {
        int d = 2,EhPrimo=1;		

        if (i <= 1)
            EhPrimo = 0;

        while (EhPrimo == 1 && d <= i / 2) {
            if (i % d  == 0)
                EhPrimo = 0;
                d = d + 1;
            }

        if (EhPrimo == 1)
        {
            // printf("%d e' primo \n", i);
            primo_proximo = i;
            break;
        }
    }   
    

    printf("%d\n",primo_anterior);
    printf("%d\n",primo_proximo);
    // printf("O número primo que vem antes de %d: %d\n", numero, primo_anterior);
    // printf("número informado: %d\n", numero);
    // printf("O número primo que vem depois de %d: %d\n", numero, primo_proximo);






}