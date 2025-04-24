#include <stdio.h>

// Función que cuenta la cantidad de dígitos en un número
int contarDigitos(int numero) {
    int contador = 0;
    do {
        contador++;
        numero /= 10;
    } while (numero > 0);
    return contador;
}

int main() {
    int numero;

    while (1) {
        printf("Ingresa un número entero positivo (0 para salir): ");
        if (scanf("%d", &numero) != 1 || numero < 0) {
            printf("Por favor, ingresa un número entero positivo válido.\n");
            while (getchar() != '\n'); // Limpia el búfer
            continue;
        }

        if (numero == 0) {
            printf("Programa finalizado.\n");
            break;
        }

        int digitos = contarDigitos(numero);
        printf("El número %d tiene %d dígito%s.\n", numero, digitos, digitos == 1 ? "" : "s");
    }

    return 0;
}
