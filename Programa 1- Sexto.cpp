#include <stdio.h>

int main() {
    float radio, resultado;
    int elige;
    const float PI = 3.1416;

    printf("Elige una opcion:\n");
    printf("  1) Calcular el Area del Circulo\n");
    printf("  2) Calcular el Perimetro del Circulo\n");
    printf("Elige una Opcion: ");
    scanf("%d", &elige);

    printf("Radio: ");
    scanf("%f", &radio);

    if (elige == 1) {
        resultado = PI * radio * radio;
        printf("Area del Circulo: %.2f\n", resultado);
    }
    if (elige == 2) {
        resultado = 2 * PI * radio;
        printf("Perimetro del Circulo: %.2f\n", resultado);
    }

    return 0;
}
