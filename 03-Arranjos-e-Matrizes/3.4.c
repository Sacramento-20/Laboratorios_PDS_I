#include <stdio.h>

int main(){
    int calculo, aeds, i, j, cont=0, maior;

    
    scanf("%d", &aeds);
    int vetora[aeds];
    for(i=0; i < aeds; i++){
        scanf("%d", &vetora[i]);
    }

    
    scanf("%d", &calculo);
    int vetorc[calculo];
    for(i=0; i < calculo; i++){
        scanf("%d", &vetorc[i]);
    }
    // apos preencher todas as matriculas, dever ser feito da seguinte forma:
    // fazer um vetor percorrer inteiramente o outro em busca de elementos semelhantes

    for(i=0; i < aeds; i++){
        for(j=0; j < calculo; j++){
            if(vetora[i] == vetorc[j]){
                printf("%d\n", vetorc[j]);
            }
        }
    }
    return 0;
} 