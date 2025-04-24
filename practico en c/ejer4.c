#include <stdio.h>

int main() {
    int numero;
    int suma = 0;

    while (1) {
        printf("Ingresa un número entero positivo (número negativo para salir): ");
        
        if (scanf("%d", &numero) != 1) {
            printf("Entrada no válida. Intenta de nuevo.\n");
            while (getchar() != '\n'); 
            continue;
        }

        if (numero < 0) {
            printf("Suma total acumulada: %d\n", suma);
            printf("Programa finalizado.\n");
            break;
        }

        suma += numero;
    }

    return 0;
}
