#include <stdio.h>

int main(){
    int linhas, colunas, i,j;

    scanf("%d",&linhas);
    scanf("%d",&colunas);

    int mA[linhas][colunas];

    for(i=0; i < linhas; i++){
        for(j=0; j < colunas; j++){
            scanf("%d", &mA[i][j]);
        }
        
    }

    for(i=0; i < linhas; i++){
        for(j=0; j < colunas; j++){
            printf("%d ", (mA[i][j] * -1));
        }
        printf("\n");
    }

    return 0;
}