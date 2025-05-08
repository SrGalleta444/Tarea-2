// Ejercicio 2 Ariel Anaya
#include <stdio.h>

int main()
{
    int rad, c, a;
    
    printf("Radio de la circunferencia?");
    scanf("%d", &rad);
    
    a = 3.1416 * rad * rad;
    c = 2 * 3.1416 * rad;
    
    
    printf("El perímetro de la circunferencia es %d \n", c);
    printf("El area de la circunferencia es %d \n", a);

    return 0;
}
