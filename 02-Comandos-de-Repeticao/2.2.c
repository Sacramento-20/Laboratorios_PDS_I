/*Aproxime o valor de Pi empregando a série infinita de Gregory-Leibniz:

Pi = 4 - 4/3 + 4/5 - 4/7 + ...

Executando a série acima, a sua função deve retornar o número de iterações necessárias
para encontrar um valor próximo ao valor de M_PI (uma constante com o valor de PI da
biblioteca math.h) com uma diferença máxima de X, que é fornecida como entrada. No
exemplo abaixo: foi necessário calcular 100002 termos da série para obter um valor
próximo ao valor de PI (M_PI) com uma diferença de 0.000010. 
*/

#include <stdio.h>
#include <math.h>

int main(){

    int i = 0;
    double pi = 0, precisao;

    scanf("%lf", &precisao);

    do{
        pi += pow(-1, i) * (double) 4 / (2*i +1);
        i++;
    
    }while(fabs(pi-M_PI) > precisao);

    printf("%i\n", i);
    
}

