// Ejercicio 15. Arreglos. Ariel Anaya
#include <stdio.h>

int main()
{
    int list[10] = {5, -3, 0, -72, 34, -5, 10, 59, 0, -48};
    int i;
    int positivos = 0;
    int negativos = 0;
    int nulos = 0;
    
    for(i = 0; i < 10; i++){
        
        if (list[i] > 0) {
            positivos++;
        } else if (list[i] < 0) {
            negativos++;
        } else {
            nulos++;
        }
    }
    
   printf("Cantidad de números positivos en lista: %d\n", positivos);
    printf("Cantidad de números negativos en lista: %d\n", negativos);
    printf("Cantidad de números nulos en lista: %d\n", nulos);

    return 0;
}
