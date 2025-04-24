#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero;

    while (1) {
        printf("Ingresa un número entero (-1 para salir): ");
        if (scanf("%d", &numero) != 1) {
            printf("Por favor, ingresa un número entero válido.\n");
            // Clear invalid input
            while (getchar() != '\n');
            continue;
        }

        if (numero == -1) {
            printf("Programa finalizado.\n");
            break;
        }

        if (numero % 2 == 0) {
            printf("%d es un número **par**.\n", numero);
        } else {
            printf("%d es un número **impar**.\n", numero);
        }
    }

    return 0;
}
