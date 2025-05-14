// Ejercicio 12 Ariel Anaya
#include <stdio.h>

int main()
{
    int n;
    int prod = 1;
    int i;
    
    printf("cuantas cifras quiere multiplicar?");
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++){
        prod = prod * i;
    }
    
    printf("El producto de los numeros es: %d\n", prod);

    return 0;
}
