#include <stdio.h>
#include <string.h>

int main() {
    char palavra[100], inversa[100];
    int i, len;

    fgets(palavra, 100, stdin);
    len = strlen(palavra);

    
    for(i = 0; palavra[i] != '\0'; i++){
        inversa[i] = palavra[(len-1) - i];
        printf("%c", inversa[i]);
    }

    return 0;
}

