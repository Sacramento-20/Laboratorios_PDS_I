#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int contacaracter(char string[], char letra)
{
    // vou pegar o numero de letras para checar se tem alguma vazia
    int len = strlen(string);
    
    // -1 pq o valor inclue o \0
    // caso base - se o numero de caracteres for igual a 0, retorna 0
    if((len-1) == 0)
    {
        return 0;
    }
    else
    {
        // aqui ele começa a impilhar as funções
        // se o primeiro elemento da string for igual a letra, ele retorna o valor do caso base +1
        if (string[0] == letra)
        {
            return contacaracter(&string[1], letra) + 1;
            //return 1;
        }
        // se nao - ele  retorna a string em uma casa a frente
        else
            return contacaracter(&string[1], letra);
    }

}


int main()
{
    char palavra[50];
    char letra;

    printf("informe a palavra: ");
    fgets(palavra, 50, stdin);
    
    printf("informe a letra: ");
    letra = getchar();


    printf("%d", contacaracter(palavra, letra));

    return EXIT_SUCCESS;
}