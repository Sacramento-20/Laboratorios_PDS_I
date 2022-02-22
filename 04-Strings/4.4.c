#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char string[100], substring[100], *resultado;
    int i, j, pontos = 0;

    fgets(string, 100, stdin);
    fgets(substring, 100, stdin);

    resultado = strstr(string, substring);
    
    i = strlen(resultado);

    printf("%d", i);
    // if (strlen(resultado) > 1){
    //     printf("É substring");
    // }
    // else{
    //     printf("Não é substring");
    // }
    return 0;
}    