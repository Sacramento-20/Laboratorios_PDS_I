#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char nome1[50];
    char nome2[50];
    char nome3[50];
    int i=0, j=0;
    scanf("%s", nome1);
    scanf("%s", nome2);

    for (i = 0; nome1[i]; i++) {
        nome3[i] = nome1[i];
    }
    j = i;
    for (i = 0; nome2[i] != 0; i++) {
        nome3[j] = nome2[i];
        j++;
    }
    nome3[j] = '\0';

    printf("%s", nome3);



    return 0;
}
