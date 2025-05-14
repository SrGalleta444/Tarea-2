// Ejercicio 13. Arreglos. Ariel Anaya
#include <stdio.h>

int main()
{
    int list[5] = {5, 3, 66, 72, 34};
    int i ;
    int s = 0;
    
    for(i = 0; i < 5; i++){
        s = s + list[i];
        
    }
    printf("La suma de la lista es: %d", s);

    return 0;
}
