#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void apaga(char palavra[], char letra){


    char string[30];
    strcpy(string,palavra);
    char substring[30];

    for(int i=0; i < strlen(string) ; i++){
        if(string[i] != letra){
            substring[i] = string[i];
            printf("%c", substring[i]);
        }
    }
}

int main(){

    char str[50];
    char letra;

    //printf("escreva a palavra:");
    fgets(str, 50, stdin);
    str[strlen(str)-1] = '\0';

    //printf("escreva a letra:");
    letra = getchar();

    apaga(str,letra);

    return 0;
}