#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//struct da iris
typedef struct{
    float sizeS;
    float largeS;
    float sizeP;
    float largeP;
    char type[50];
}Iris;

Iris iris[150];

//struct iris adicional
struct adic_Iris
{
    float sizeS;
    float largeS;
    float sizeP;
    float largeP;
};


void classificar(struct adic_Iris Na, Iris registros_identificados[],int n)
{
    double menor_distancia ;
    double menor_indice=10;   //a forma de comparar, não sei se está correto
    int indice;
    
    for(int i = 0; i < n; i++)
    {
        //menor_distancia = abs(iris[i].sizeS - Na.sizeS) + abs(iris[i].largeS - Na.largeS) + abs(iris[i].sizeP - Na.sizeP) + abs(iris[i].largeP - Na.largeP);
        //distancia = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
        menor_distancia = sqrt((iris[i].sizeS - Na.sizeS)*(iris[i].sizeS - Na.sizeS) + (iris[i].largeS - Na.largeS)*(iris[i].largeS - Na.largeS) + (iris[i].sizeP - Na.sizeP)*(iris[i].sizeP - Na.sizeP) + (iris[i].largeP - Na.largeP)*(iris[i].largeP - Na.largeP));

        if(menor_distancia < menor_indice)
        {
            menor_indice = menor_distancia;
            indice = i;
        }
    }

    printf("%s", iris[indice].type);

}

int main()
{
    struct adic_Iris adc_iris;
    int n;
    scanf("%d",&n);
    for(int i=0; i < n; i++)
    {
        scanf("%f %f %f %f %s",&iris[i].sizeS, &iris[i].largeS,&iris[i].sizeP,&iris[i].largeP,iris[i].type);
    }
    scanf("%f %f %f %f", &adc_iris.sizeS, &adc_iris.largeS, &adc_iris.sizeP, &adc_iris.largeP);
    classificar(adc_iris,iris,n);      // o primeiro parametro é da iris adicional

    return 0;
}