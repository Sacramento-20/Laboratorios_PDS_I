#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int dia;
    int mes;
    int ano;
}data;

int bissexto(long int ano){
    if(ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0){
        return 1;
    }
    else{
        return 0;
    }
}

int calcula_data(data d){
    data referencia = {1,1,1};
    float total = 0;
    total += abs(referencia.ano -1 -d.ano) * 365.25;

    int meses[]= {31,28,31,30,31,30,31,31,30,31,30,31};

    for (int mes = d.mes; mes <= 12; mes++){
        total -= meses[mes-1];
    }

    total += (d.dia - referencia.dia) +1;

    if(bissexto(d.ano) && d.mes <= 2){
        total --;
    }

    return total;

}


int main(){
    data database = {17,9,2020};
    data dataentrada;
    char buffer[20];

    while(fgets(buffer,20,stdin) != NULL){
        sscanf(buffer,"%d %d %d", &dataentrada.dia, &dataentrada.mes, &dataentrada.ano);
        printf("%d\n", abs(calcula_data(database)- calcula_data(dataentrada))+1);
    }


}