// Ejercicio 7 Ariel Anaya
// Problema con condicional If
#include <stdio.h>

int main()
{
    int pb, t, d;
    
    printf("Tiempo de estancia (días)");
    scanf("%d", &t);
    printf("Distancia a recorrer en km (ida y vuelta)");
    scanf("%d", &d);
    
    pb = d * 0.23;
    
    if(t > 7 && d > 800){
        pb = pb - pb * 0.3;
    }
    
    printf("El total a pagar por su boleto es %d", pb);

    return 0;
}
