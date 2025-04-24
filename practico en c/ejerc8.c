#include <stdio.h>

int main() {
    int numero;

    while (1) {
        printf("Ingresa un número entero positivo (0 o negativo para salir): ");
        
        if (scanf("%d", &numero) != 1) {
            printf("Entrada no válida. Intenta de nuevo.\n");
            while (getchar() != '\n'); 
            continue;
        }

        if (numero <= 0) {
            printf("Programa finalizado.\n");
            break;
        }

        unsigned long long resultado = 1;
        for (int i = 1; i <= numero; i++) {
            resultado *= i;
        }

        printf("El factorial de %d es %llu\n", numero, resultado);
    }

    return 0;
}
