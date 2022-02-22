#include <stdio.h>

int main(){
    int fibonacci[800];
    int x=0, i;
    fibonacci[0] = 0;
    fibonacci[1] = 1;

    for (i = 2; i <= 800; i++){
        fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
    }
    while(x >= 0 && x <= 800){
        printf("Informe um numero: ");
        scanf("%d", &x);
        if(x >= 0 && x <= 800){
            printf("%d\n",fibonacci[x]);
        }
    }

    return 0;
}