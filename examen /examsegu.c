#include <stdio.h>
#include "funciones.h"
//opcion 1
//solicitar al usuario un numero entero positivo
//mostrar si es primo o no untilizando la funcion esprimo()

//opcion 2
//pedir al usuario un entero positivo
//sacar el factorial usando la funcion factorial() con un bucle
int main() {
    while (1) {
        printf("Ingresa un número entero (-1 para salir): ");
        if (scanf("%d", &numero) != 1) {
            printf("Por favor, ingresa un número entero válido.\n");
            while (getchar() != '\n');
            continue;

        }
    }
}
//opcion 3
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

        if (numero%3) {
            contador+
            if(numero==numero){
                break;
            }
        }
    }

    printf("Se ingresaron %d múltiplos de 3.\n", contador);
    printf("Programa finalizado.\n");
    return 0;

}
// opcion 4

while (1) {
    // Mostrar el menú
    printf("\n--- MENÚ ---\n");
    printf("1. Verificar si es un numero primo\n");
    printf("2. Calcular el factorial de un numero\n");
    printf("3. Contar numeros pares e impares entre 1 y N\n");
    printf("4. mostrar numeros entre 3 entre 1 y N\n");
    printf("5. Salir del programa")
    printf("Seleccione una opción: ");

    if (scanf("%d", &opcion) != 1) {
        printf("Entrada inválida. Intente de nuevo.\n");
        while (getchar() != '\n'); // Limpiar el búfer
        continue;
    }

    if (opcion == 5) {
        printf("Saliendo del programa.\n");
        break;
    }

    // Validar opciones válidas
    if (opcion < 1 || opcion > 5) {
        printf("Opción no válida. Intente de nuevo.\n");
        continue;
    }

    // Pedir números solo si la opción es 1, 2, 3 o 4
    printf("Ingrese el primer número: ");
    scanf("%d", &numero);
    switch (opcion){
        case 1:
        int main() {
            int numero;
        
            while (1) {
                printf("Ingresa un número entero (-1 para salir): ");
                if (scanf("%d", &numero) != 1) {
                    printf("Por favor, ingresa un número entero válido.\n");
                    while (getchar() != '\n');
                    continue;
                }
        
                if (numero == -1) {
                    printf("Programa finalizado.\n");
                    break;
                }
                if (numero % 2 == 0){
                    printf("%d no es un numero impar numero");
                }
                    else {
                    }   
                if (numero % numero == 0) {
                    if (numero % 1 == 0){
                        printf("es un numero impar");
                        break;
                    }
                }
            }
            return 0;
        }
        
    }
        case 2:

return 0;
}
