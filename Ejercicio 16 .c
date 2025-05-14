// Ejercicio 16. Arreglos. Ariel Anaya
#include <stdio.h>

int main()
{
    int list[100];
    int i = 0;

    for(i = 0; i < 100; i++){
        list[i] = (i + 1) * 2;
    }

    printf("Los primeros 100 números pares son:\n");
    for (int i = 0; i < 100; i++){
        printf("%d ", list[i]);
    }

    return 0;
}
