#include <stdio.h>

int main(){
    int vetor1[10], vetor2[10], i;
    for(i=0; i < 10; i++){
        printf("Informe o valor: ");
        scanf("%d", &vetor1[i]);
    }

    for(i=0; i < 10; i++){
        vetor2[i] = vetor1[9-i];
    }

    for(i=0; i < 10; i++){
        printf("%d\n", vetor2[i]);
    }
    
    return 0;
}