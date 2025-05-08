// Ejercicio 6 Ariel Anaya
// Problema con condicional If
#include <stdio.h>

int main()
{
    int s, sa;
    
    printf("Sueldo actual?");
    scanf("%d", &s);
    
    if(s < 1000){
        sa = s + s * 0.15;
    }
    else{
        sa = s + s * 0.12;
    }
    
    printf("El sueldo con aumento incorporado es %d", sa);

    return 0;
}
