#include <stdio.h>

int main(){

    float n1,n2,n3,n4,soma,soma2,divisao;

    printf("insire o km inicial e aperte enter:\n");
     scanf("%f",&n1);

    printf("insire o km final e aperte enter:\n");
     scanf("%f",&n2);

    printf("insire o tempo inicial e aperte enter:\n");
     scanf("%f",&n3);

    printf("insire o tempo final e aperte enter:\n");
     scanf("%f",&n4);

    soma=n2-n1;
    soma2=n4-n3;
    divisao=soma/soma2;

    printf("a velocidade média é:%.2f\n",divisao);

    return 0;



}