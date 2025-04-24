#include <stdio.h>

int main() {
    int numero;
    int contador = 0;

    while (1) {
        printf("Ingresa un número entero (negativo para salir): ");
        
        if (scanf("%d", &numero) != 1) {
            printf("Entrada no válida. Intenta de nuevo.\n");
            while (getchar() != '\n'); // Limpiar el búfer
            continue;
        }

        if (numero < 0) {
            break;
        }

        if (numero % 3 == 0) {
            contador++;
        }
    }

    printf("Se ingresaron %d múltiplos de 3.\n", contador);
    printf("Programa finalizado.\n");
    return 0;
}
