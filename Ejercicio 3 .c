// Ejercicio 3 Ariel Anaya
#include <stdio.h>

int main()
{
    int cd, cp;
    
    printf("Introduzca cantidad en dolares");
    scanf("%d", &cd);
    
    cp = cd * 11.96;
    
    printf("La cantidad aproximada en pesos es %d", cp);

    return 0;
}
