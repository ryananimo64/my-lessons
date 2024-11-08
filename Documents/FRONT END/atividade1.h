#include <stdio.h>

int maior (int n1,int n2){
    int rs;
    if (n1>n2)
    {
        rs=n2;
    }
    else
    {
        rs=n2;
    }
 printf("");  
}

   char sexo(char letra){
      if (letra == 'm'|| letra == 'M')
      {
        printf("Masculino\n");
      }
      else if (letra == 'f'||letra == 'F')
      {
        printf("Feminino\n");
      }
      else{
        printf("Sexo Invalido");
      }
    
   }

 void vogal (char letra){
  
    if (letra == 'a'||letra == 'e'|| letra == 'i' || letra=='o'|| letra == 'u')
    {
        printf("esta letra é uma vogal.\n");
    }
    else
    {
       printf("esta letra é uma consoante.\n");
    }

  
   
 }
   void reajuste(float salario){

        float valor_aumento;
        float novo_salario;
        if (salario <= 280)
        {
            valor_aumento = salario * 20.0/100;
            novo_salario= salario + valor_aumento;
            printf("O salario antigo é de %f e foi reajustado em 20%. o valor almentado agora é %f e valor atual agora é %f \n",salario,valor_aumento,novo_salario);
        }
        else if (salario <= 700)
        {
             valor_aumento = salario * 15.0/100;
            novo_salario= salario + valor_aumento;
            printf("O salario antigo é de %f e foi reajustado em 15%. o valor almentado agora é %f e valor atual agora é %f \n",salario,valor_aumento,novo_salario);
        }

         else if (salario <= 1500)
        {
             valor_aumento = salario * 10.0/100;
            novo_salario= salario + valor_aumento;
            printf("O salario antigo é de %f e foi reajustado em 10%. o valor almentado agora é %f e valor atual agora é %f \n",salario,valor_aumento,novo_salario);
        }
        
         else 
        {
             valor_aumento = salario * 5.0/100;
            novo_salario= salario + valor_aumento;
            printf("O salario antigo é de %f e foi reajustado em 5%. o valor almentado agora é %f e valor atual agora é %f \n",salario,valor_aumento,novo_salario);
        }
    }