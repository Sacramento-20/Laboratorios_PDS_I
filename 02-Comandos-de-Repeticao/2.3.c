//Faça um programa que mostre uma contagem na tela de 233 a 457, só que contando de 3
//em 3 quando estiver entre 300 e 400 e de 5 em 5 quando não estiver. (utilize do{}while()) 

#include <stdio.h>


int main()
{
    int inicio = 233, fim = 457, i = inicio;
    do
    {
        if(i <= 303){
            printf("%d\n", i);
            i += 5;
        }
        if(i >= 303 && i < 402){
            printf("%d\n", i);
            i += 3;
        }
        if (i >= 402){
            printf("%d\n", i);
            i += 5;
        }
    }
    while(i <= fim);
    
    return 0;
}
