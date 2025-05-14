// Ejercicio 14. Arreglos. Ariel Anaya
#include <stdio.h>

int main()
{
    int list[10] = {5, 3, 66, 72, 34, 5, 10, 59, 17, 48};
    int i ;
    int n = 5;
    int cva = 0;
    
    for(i = 0; i < 10; i++){
        if(list[i] == n){
            cva++;
        }
        
    }
    printf("Cuantas veces aparece el numero? %d", cva);


    return 0;
}
