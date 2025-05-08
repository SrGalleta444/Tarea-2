// Ejercicio 5 Ariel Anaya
// Problema con condicional If
#include <stdio.h>

int main()
{
    int c, tp;
    
    printf("De cuanto es la compra?");
    scanf("%d", &c);
    
    tp = c;
    
    if(c > 2500){
        tp = c - c * 0.08;
    }
    
    printf("El total a pagar es %d", tp);

    return 0;
}
