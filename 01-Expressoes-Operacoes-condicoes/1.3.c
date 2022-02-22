#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brasil");
    
    int x, y, z;

    printf("Informe 3 números: \n");
    scanf("%d%d%d", &x,&y,&z);

    if(x % y == 0 && x % z == 0)
        printf("O número é divisível!\n");
    else
        printf("O número não é divisível!");

    printf("\n");
    return 0;
}