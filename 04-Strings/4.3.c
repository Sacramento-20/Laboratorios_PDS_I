// tres entradas, a frase, o elemento1 que esta na frase e o elemento2 que vai substituir no elemento1

#include <stdio.h>
#include <stdlib.h>

int main(){

    char frase[100], elemento1, elemento2;
    int i;

    fgets(frase, 100, stdin);
    elemento1 = getchar();
    getchar();      // esse vai servir para pegar o \n, como o buffer
    elemento2 = getchar();

    // percorrer cada elemento da string e substituir se ele for igual ao que foi informado
    for (i = 0; frase[i]; i++) {
        if (frase[i] == elemento1) {
            frase[i] = elemento2;
            break;
        }
    }

    puts(frase);




    return 0;
}


