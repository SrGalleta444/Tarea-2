// Ejercicio 8 Ariel Anaya
// Problema con condicional If
#include <stdio.h>

int main()
{
    int a, b;
    
    printf("Introduce un munero");
    scanf("%d", &a);
    printf("Introduce otro numero");
    scanf("%d", &b);
    
    if(a % b == 0){
        printf("El segundo numero es divisor del primero");
    }
    if(b % a == 0){
        printf("El primer numero es divisor del segundo");
    }

    return 0;
}
