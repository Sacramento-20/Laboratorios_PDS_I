#include <stdio.h>
#include <string.h>

// habilidades de pessoa.
struct pessoa {
    char nome[50];
    unsigned int idade;
    float salario;
    char rua[50];
    int numero;
    char estado[50];
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
    struct pessoa p[4];
    struct comparacao t;
    int aux=0;

    // variavel para coodernar as pessoas
    int pessoas = 0;
    


    
    while( fgets(entrada,10,stdin) != NULL){
       
        entrada[strlen(entrada)-1] = '\0';

        // scanf("%s", valor);
        if(strcmp(entrada, "inserir") == 0){
            

            scanf("%s %d %f %s %d %s",p[pessoas].nome, &p[pessoas].idade, &p[pessoas].salario, p[pessoas].rua, &p[pessoas].numero, p[pessoas].estado);

            if(pessoas > 4){
                printf("Espaco insuficiente\n");
                continue;
            }

            printf("Registro %s %d %.2f %s %d %s inserido\n", p[pessoas].nome, p[pessoas].idade, p[pessoas].salario, p[pessoas].rua, p[pessoas].numero, p[pessoas].estado);
            pessoas += 1;
        }
        else if(strcmp(entrada, "alterar") == 0){
            
            scanf("%s %d %f %s %d %s",p[pessoas].nome, &p[pessoas].idade, &p[pessoas].salario, p[pessoas].rua, &p[pessoas].numero, p[pessoas].estado);
            for (int i = 0; i < pessoas; i++){
                if(strcmp(p[pessoas].nome, p[i].nome) == 0){
                    p[i].idade = p[pessoas].idade;
                    p[i].salario = p[pessoas].salario;  
                    strcpy(p[i].rua, p[pessoas].rua);  
                    p[i].numero = p[pessoas].numero;
                    strcpy(p[i].estado, p[pessoas].estado);
                    printf("Registro %s %d %.2f %s %d %s alterado\n", p[i].nome, p[i].idade, p[i].salario, p[i].rua, p[i].numero, p[i].estado);
                    aux += 1;
                    break;
                }
                    // strcpy(p[i].nome, p[pessoas].nome);
            
            }
            if(aux == 0){
                printf("Registro ausente para alteracao\n");
            }
            
            
        }


        else if(strcmp(entrada, "mostrar") == 0){
            
            setbuf(stdin,NULL);

            // percorrer um vetor comparando para saber se tem o nome 
            scanf("%s",t.nome);
            
            for (int i = 0; i < 5; i++){
               if(strcmp(t.nome, p[i].nome)== 0){
                   printf("Registro %s %d %.2f %s %d %s\n", p[i].nome, p[i].idade, p[i].salario, p[i].rua, p[i].numero, p[i].estado);
                   validador = 1; 
                   continue;
                }   
            }
            if(validador != 1){
                printf("Registro ausente\n");
            }
            validador = 0;

        }
        

    }
       

    return 0;
}