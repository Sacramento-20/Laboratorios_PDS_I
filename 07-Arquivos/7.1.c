#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[]){


    FILE *file;

    file = fopen(argv[1], "r");

    char frase[100];
    int somatorio = 0;
    char letra = 'a';

    while(fgets(frase, 100, file) != NULL){

        for(int i=0; i<= strlen(frase); i++){
            if(frase[i] == letra){
                somatorio += 1;
        
            }

        }

    }

    printf("%d", somatorio);
    printf("\n");
    
    fclose(file);
    return 0;
}