#include <stdio.h>

int primo(unsigned long long int n){

    unsigned long long int nprimo=0;

        if(n==2){
            return n;
        }
        
        if(n>2){
        for(long long int i=2; i<= n / 2; i++){
            if(n % i == 0)
            nprimo+=1;
        }
        
        if(nprimo!=0){
            // return 0;
        
        } else {
            return n;
            
        } 
    }   
    
    return 0;
}


int soma_primos(long int n){
    int i = 0, valor = 0, soma = 0 ;

    while(i < n){
        valor ++;
        if (primo(valor) == valor){
            // printf("%d ", primo(valor));
            soma += primo(valor);
            i++;
        }

    }

    return soma;
}


// mostrar todos os primos em um intervalo
int main(){
    long int entrada;
    
    while(scanf("%ld",&entrada) !=EOF){
        printf("%d\n", soma_primos(entrada));
        // scanf("%d", &entrada);
    }

    return 0;
}