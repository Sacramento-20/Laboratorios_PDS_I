#include <stdio.h>

int main(){

    //xn = 4*xn-1 - 2*xn-2

    int n, x0, x1, i=0, aux1, aux2, xn;

    scanf("%d %d %d", &n, &x0, &x1);

    while(i<=n){
        
        if(i == 0 ){
            printf("X0: %d\n", x0);
            aux2 = x0; //3
        }
        else if(i ==1){
            printf("X1: %d\n", x1);
            aux1 = x1; //4
        }
        else{
            xn = (4*aux1) - (2*aux2);
            printf("X%d: %d\n", i, xn);

            aux2 = aux1;
            aux1 = xn;

        }
        i++;
    }
}

