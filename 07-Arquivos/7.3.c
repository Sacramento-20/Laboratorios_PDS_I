#include <stdio.h>
#include <stdlib.h>


int main(){

    char arquivo[10];

    fgets(arquivo, 10, stdin);

    FILE *file;

    file = fopen(arquivo, "rb");

    // char frase[100];
    long long int matriz1[5][5], matriz2[5][5], soma[5][5];
    int i = 0;
    
    
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            fscanf(file, "%lld ", &matriz1[i][j]);
        }
    }

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            fscanf(file, "%lld ", &matriz2[i][j]);
        }
    }

    // for (int i = 0; i < 5; i++){
    //     for (int j = 0; j < 5; j++){
    //         soma[i][j] = matriz2[i][j]+ matriz1[i][j];
    //     }
    //     printf("\n");
    // }

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            printf("%lld ", matriz1[i][j]+ matriz2[i][j]);
        }
        printf("\n");
    }

    
    
    fclose(file);

}