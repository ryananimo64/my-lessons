#include <stdio.h>

int main() {
     int janeiro=1 , fevereiro=2,marco=3,abril=4,maio=5,junho=6,julho=7,agosto=8,setembro=9,outubro=10,novembro=11,dezembro=12;

    int mes;

    printf("digite um numero seja um mês do ano e tecle enter:\n");
    scanf("%d",&mes);

    if (mes == janeiro || mes == fevereiro || mes == marco || mes == dezembro)

    {
        printf("sua estação é :verão\n",mes);
    }
    else if (mes == abril || mes == maio || mes == maio)
    {
        printf("sua estação é :outono\n",mes);
    }
    else if (mes == junho || mes == julho || mes == agosto)
    {
         printf("sua estação é : inverno\n",mes);
    }
    else if (mes == setembro || mes==outubro || mes==novembro)
    {
         printf("sua estação é : primavera\n",mes);
    }
    
    

    
    return 0;
}