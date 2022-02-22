#include <stdio.h>
// #include <stdlib.h>
#include <string.h>


int main(){
    
    char frase[500];
    
    fgets(frase,500,stdin);
    frase[strlen(frase)-1] = '\0';


    FILE *file;

    file = fopen(frase, "rb");

    // char frase[100];
    int somatorio = 0;
    char letra = 'a';

    while(fgets(frase, 100, file) != NULL){

        // printf("%s", frase);

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