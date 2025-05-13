// Ariel Anaya Ejercicio 4
#include <stdio.h>

int main()
{
   int inv;
   float cant;
   float tim;
   
   printf("Tasa de interés en decimales? ");
   scanf("%f", &tim);
   printf("Cantidad invertida? ");
   scanf("%d", &inv);
   
   cant = inv + inv * tim;
   
   printf("La cantidad al finalizar el mes será: %.2f\n", cant);
   
   return 0;
}
