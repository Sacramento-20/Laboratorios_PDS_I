#include <stdio.h>

int main(){
    int intervalo1, intervalo2, i, contador;
    scanf("%d %d", &intervalo1, &intervalo2);

    if(intervalo2 < intervalo1 || intervalo1 < 1){
    }
    else{
        while(intervalo1 <= intervalo2){
            contador = 0;
            for(i=1; i <= intervalo1; i++){
                if(intervalo1 % i == 0)
                    contador++;
            }
            if(contador == 2)
                printf("%d\n", intervalo1);
            intervalo1++;
        }
    }
}


//if(intervalo2 < intervalo1 || intervalo1 < 1 || intervalo2 > 1000)
// iria usar a condição a cima para limitar o intervalo ate 1000, porem um dos testes envolvidos para validar o algoritmo informa um intervalo de 1000 ate 2000, então retirei a ultima condição do if que limitava o intervalo.  