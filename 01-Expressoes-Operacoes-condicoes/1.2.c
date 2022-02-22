//Faça um programa que lê 3 valores inteiros e imprima o maior deles.


#include <stdio.h>

int main()
{
    int n1 = 0, n2 = 0, n3 = 0;

    printf("Informe os 3 numeros: ");
    scanf("%d%d%d", &n1, &n2, &n3);

    if (n1 >= n2 && n1 >= n3)
        printf("%d", n1);
    else if (n2 >= n1 && n2 >= n3){
            printf("%d", n2);
    }
    else if (n3 >= n1 && n3 >= n1){
            printf("%d", n3);
    }

    return 0;
}