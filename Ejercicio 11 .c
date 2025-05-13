// Ejercicio 11 Ariel Anaya
#include <stdio.h>

int main() {
    int num;
    int i;
    int s = 0;
    
    for(i = 10; i <= 50; i++){
     if(i % 2 == 0){
         s = s + i;
         
     }
    }
    printf("La suma es: %d\n", s);


    return 0;
}
