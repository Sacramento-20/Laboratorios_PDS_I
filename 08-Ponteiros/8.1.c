#include <stdio.h>
#include <stdlib.h>

void media(double vet[], int n, int *i)
{
    vet[n];
    int media, soma = 0, resultado, indice, absoluto;

    for(int i =0; i< n; i++){
        scanf("%lf",&vet[i]);
        soma += vet[i];
    }
    absoluto = vet[n-3];
    media = soma/n;

    for(int j=0; j < n; j++){
        resultado = abs(vet[j] - media);

        if(resultado <= absoluto){
            absoluto = resultado;
            *i = j;
            
        }
    }

}

int main(){

    int n_vetor, i;
    scanf("%d",&n_vetor);
    
    double vet[n_vetor];
    
    media(vet,n_vetor,&i);
    printf("%d\n",i);

    return 0;
}