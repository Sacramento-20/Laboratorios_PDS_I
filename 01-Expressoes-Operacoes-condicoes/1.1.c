# include <stdio.h>

int main(){

    float temperatura, resultado;


    printf("--------------------------------------------\n");
    printf("|          Conversor de Temperatura        |\n");
    printf("--------------------------------------------\n");

    printf("Informe a temperatura em Celsius: ");
    scanf("%f", &temperatura);

    resultado = (1.8 * temperatura + 32);

    printf("A conversão de Celsius para Fahrenheit é: %.0f f\n",resultado);
    
    return 0;
};