#include <stdio.h>
#include <string.h>

// habilidades de pessoa.
struct pessoa {
    char nome[50];
    unsigned int idade;
    float salario;
};

struct pessoas{
    struct pessoa p;
};

struct comparacao{
    char nome[50];
};

struct vetor{
    struct comparacao t;
};
// vetor de pessoa.
// struct pessoas{
//     pessoa p[3];
// };
int main(){

    int indice = 0;
    int n_pessoa = 0;
    int validador = 0;
    char entrada[10], valor[10]; // valor para coordenar o while
    int i = 0;
    struct pessoa p[3];
    struct comparacao t;

    // variavel para coodernar as pessoas
    int pessoas = 0;
    



    while( fgets(entrada,10,stdin) != NULL){
        // entra na condição se é para mostrar ou para inserir
        // scanf("%s",valor);

        entrada[strlen(entrada)-1] = '\0';

        if(strcmp(entrada, "inserir") == 0){
            // printf("pessoa n:%d \n", pessoas);

            scanf("%s %d %f",p[pessoas].nome, &p[pessoas].idade, &p[pessoas].salario);

            if(pessoas > 3){
                printf("Espaco insuficiente\n");
                continue;
            }

            printf("Registro %s %d %.2f inserido\n", p[pessoas].nome, p[pessoas].idade, p[pessoas].salario);
            pessoas += 1;
        }

        else if(strcmp(entrada, "mostrar") == 0){
            // printf("ESTOU EM MOSTRAR!\n");
            setbuf(stdin,NULL);

            // percorrer um vetor comparando para saber se tem o nome 
            scanf("%s",t.nome);
            
            for (int i = 0; i < 4; i++){
               if(strcmp(t.nome, p[i].nome)== 0){
                   printf("Registro %s %d %.2f\n", p[i].nome, p[i].idade, p[i].salario);
                   validador = 1; 
                }   
            }
            if(validador != 1){
                printf("Registro ausente\n");
            }
            validador = 0;
            // if(pessoas > 3){
            //     break;
            // }
        }

    }
       

    return 0;
}