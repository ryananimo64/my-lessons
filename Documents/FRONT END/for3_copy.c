#include <stdio.h>

int main(){

    int n;
    int qtd = 0;

      for ( n =1930; n <= 2064; n++)
      {
         if (n % 4 == 0)
      {
          printf("%d\n",n);
          qtd++;

      }
      
     }
     printf("___________\n_______________\n");
     printf("A Quantidade de nos bissexto é %d\n",qtd);
    return 0;  
   } 
    
    
