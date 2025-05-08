// Ejercicio 1 Ariel Anaya
#include <stdio.h>

int main()
{
    int a, b, s, r, m;
    
    printf("introduzca un munero");
    scanf("%d", &a);
    printf("introduzca otro munero");
    scanf("%d", &b);
    
    s = a + b;
    r = a - b;
    m = a * b;
    
    printf("La suma es %d \n", s);
    printf("La resta es %d \n", r);
    printf("La multiplicación es %d \n", m);

    return 0;
}
