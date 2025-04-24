#include <stdio.h>

int main() {
    int num1, num2;

    while (1) {
        printf("\nIngresa dos números enteros (0 0 para salir): ");
        if (scanf("%d %d", &num1, &num2) != 2) {
            printf("Entrada no válida. Intenta de nuevo.\n");
            while (getchar() != '\n'); // Limpiar el búfer
            continue;
        }

        if (num1 == 0 && num2 == 0) {
            printf("Programa finalizado.\n");
            break;
        }

        // Comparación directa sin función
        if (num1 > num2) {
            printf("%d es mayor que %d.\n", num1, num2);
        } else if (num1 < num2) {
            printf("%d es mayor que %d.\n", num2, num1);
        } else {
            printf("Ambos números son iguales: %d.\n", num1);
        }
    }

    return 0;
}
