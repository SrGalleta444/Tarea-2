// Ariel Anaya Ejercicio 9
#include <stdio.h>

int main()
{
   int n;
   int i;
   int tab;
   
   printf("Numero a multiplicar?");
   scanf("%d", &n);
   printf("la tabla de multiplicar es:\n");
   for(i = 1; i <= 10; i++){
       tab = n * i;
       
       printf("%d \n", tab);
   }
   
   
   return 0;
}
