#include <stdio.h>

int main(){

    int n, resul, aux;
    while(1){

        printf("Informe o numero: ");
        scanf("%d", &n);

        // Para todos os casos no qual a entrada é 0
        if(n == 0){
            printf("Múltiplos de 2: %d\n", 0);
            printf("Múltiplos de 3: %d\n", 0);
            printf("Múltiplos de 5: %d\n", 0);
            printf("Múltiplos de todos: %d\n", 0);
            break;
        }
        // Casos no qual a entrada é diferente de 0
        if(n/2){
            resul = n/2; 
            printf("Múltiplos de 2: %d\n", resul);
        }
        if(n/3){
            resul = resul/3;
            printf("Múltiplos de 3: %d\n", n/3);
        }
        if(n/5){
            resul = resul/5;
            printf("Múltiplos de 5: %d\n", n/5);
        }

        printf("Múltiplos de todos: %d\n", resul);

        break;
    }
}













