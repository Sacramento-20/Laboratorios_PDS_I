//Considerando a existência de notas (cédulas) nos valores R$ 100, R$ 50, R$ 20, R$\
10, R$ 5, R$ 2 e R$ 1, escreva um programa que capture um valor inteiro em reais\
(R$) e determine o menor número de notas para se obter o montante fornecido. O\
programa deve exibir o número de notas para cada um dos valores de nota existentes.

#include<stdio.h>

int main()
{
    int cem = 100, cinquenta = 50, vinte = 20, dez = 10, cinco = 5, dois = 2, um = 1, valor = 0, resultado = 0;
    int v1 = 0, v2 = 0, v3 = 0, v4 = 0, v5 = 0, v6=0, v7=0;
    printf("Informe o valor: ");
    scanf("%d", &valor);

    while(resultado < valor ){  // 100 <= 250 / 200 <= 250 / 250 <= 250 TRUE
         
        if (valor-resultado >= cem){  // 2 iter 250 - 100 > 100 True - 250 - 200 > 100 FAlSE
            resultado += cem; // tem 100, reinicia o ciclo agora tem 200
            v1 += 1; // tem 2
        
            continue; // volta
        }
        else if (valor-resultado >= cinquenta){ // 250 - 200 >= 50 TRUE
            resultado += cinquenta; // 200 += 50
            v2 += 1; // 1
        
            continue;
        }
        else if (valor-resultado >= vinte){
            resultado += vinte;
            v3 += 1;
        
            continue;
        }
        else if (valor-resultado >= dez){
            resultado += dez;
            v4 += 1;
        
            continue;
        }
        else if (valor-resultado >= cinco){
            resultado += cinco;
            v5 += 1;
        
            continue;
        }
        else if (valor-resultado >= dois){
            resultado += dois;
            v6 += 1;
        
            continue;
        }
        else if (valor-resultado >= um){
            resultado += um;
            v7 += 1;
        
            continue;
        }
        
    };

    printf("%d : %d\n",cem,v1);
    printf("%d : %d\n",cinquenta,v2);
    printf("%d : %d\n",vinte,v3);
    printf("%d : %d\n",dez,v4);
    printf("%d : %d\n",cinco,v5);
    printf("%d : %d\n",dois,v6);
    printf("%d : %d\n",um,v7);


    return 0;
}