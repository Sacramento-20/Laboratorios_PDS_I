#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// colocar um texto qualquer em uma variavel do tipo char

int main() { 
    char nome1[100];

    strcpy(nome1, "Texto que eu quero");

    puts(nome1);

    // pode se fazer isso também com uma variavel já declarada
    return 0;
}

// comparando se duas strings são iguais
// !strcmp(string1, string2)
// concatenar strings - strcat(string1, string2)