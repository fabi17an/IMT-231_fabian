#include <stdio.h>

typedef enum { ROJO, VERDE, AMARILLO } Semaforo;

int main() {
    Semaforo estado = ROJO;
    int ciclos = 0;

    while (ciclos < 10) {
        if (estado == ROJO) {
            printf(" Estado: ROJO - Detente\n");
        } else if (estado == VERDE) {
            printf(" Estado: VERDE - Avanza\n");
        } else if (estado == AMARILLO) {
            printf(" Estado: AMARILLO - Precaución\n");
        }
        estado = (estado + 1) % 3;

        ciclos++;
    }

    printf("Simulación finalizada después de 10 ciclos.\n");
    return 0;
}
