#include <stdio.h>

int primo(unsigned long long int x){
    unsigned long long int validador = 0;

    validador = 0;
    if(x < 2){
        return -1;
    }
    if(x == 2){
        return 1;
    }
    if(x > 2){
        for (int i = 2; i <=x/2; i++){
            if(x % i == 0){
                validador ++;
            }
        }
        if (validador == 0){
            return 1;
        }
        else{
            return 0;
        }

        return 0;
    }
}

int main(){
    
    unsigned long long int x;

    while(scanf("%lld", &x) != EOF){
        printf("%d\n",primo(x));
    }

    return 0;
}