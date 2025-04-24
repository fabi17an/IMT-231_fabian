#include <stdio.h>

int main() {
    int numero;

    while (1) {
        printf("Ingresa un número entero positivo (1 dígito para salir): ");

        if (scanf("%d", &numero) != 1 || numero < 0) {
            printf("Entrada no válida. Intenta de nuevo.\n");
            while (getchar() != '\n'); // Limpiar el búfer
            continue;
        }

        if (numero < 10) {
            printf("Número de un solo dígito. Programa finalizado.\n");
            break;
        }

        int original = numero;
        int invertido = 0;
        while (numero > 0) {
            invertido = invertido * 10 + (numero % 10);
            numero /= 10;
        }

        printf("Número invertido: %d\n", invertido);
    }

    return 0;
}
