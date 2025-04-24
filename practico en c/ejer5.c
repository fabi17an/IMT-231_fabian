#include <stdio.h>

// Funciones para cada operación
int sumar(int a, int b) {
    return a + b;
}

int restar(int a, int b) {
    return a - b;
}

int multiplicar(int a, int b) {
    return a * b;
}

int main() {
    int opcion;
    int num1, num2;

    while (1) {
        // Mostrar el menú
        printf("\n--- MENÚ ---\n");
        printf("1. Sumar dos números\n");
        printf("2. Restar dos números\n");
        printf("3. Multiplicar dos números\n");
        printf("4. Salir\n");
        printf("Seleccione una opción: ");

        if (scanf("%d", &opcion) != 1) {
            printf("Entrada inválida. Intente de nuevo.\n");
            while (getchar() != '\n'); // Limpiar el búfer
            continue;
        }

        if (opcion == 4) {
            printf("Saliendo del programa.\n");
            break;
        }

        // Validar opciones válidas
        if (opcion < 1 || opcion > 4) {
            printf("Opción no válida. Intente de nuevo.\n");
            continue;
        }

        // Pedir números solo si la opción es 1, 2 o 3
        printf("Ingrese el primer número: ");
        scanf("%d", &num1);
        printf("Ingrese el segundo número: ");
        scanf("%d", &num2);

        // Usar switch-case para elegir la operación
        switch (opcion) {
            case 1:
                printf("Resultado: %d + %d = %d\n", num1, num2, sumar(num1, num2));
                break;
            case 2:
                printf("Resultado: %d - %d = %d\n", num1, num2, restar(num1, num2));
                break;
            case 3:
                printf("Resultado: %d * %d = %d\n", num1, num2, multiplicar(num1, num2));
                break;
        }
    }

    return 0;
}
