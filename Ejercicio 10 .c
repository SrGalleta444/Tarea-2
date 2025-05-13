// Ejercicio 10 Ariel Anaya
#include <stdio.h>

int main() {
    int num;
    int i;
    int positivos = 0;
    int negativos = 0;
    int nulos = 0;

    printf("Introduce 10 números:\n");

    for(i = 0; i < 10; i++) {
        printf("%d ", i + 1);
        scanf("%d", &num);

        if (num > 0) {
            positivos++;
        } else if (num < 0) {
            negativos++;
        } else {
            nulos++;
        }
    }

    printf("Cantidad de números positivos: %d\n", positivos);
    printf("Cantidad de números negativos: %d\n", negativos);
    printf("Cantidad de números nulos: %d\n", nulos);
    
    
    return 0;
}
