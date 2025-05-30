#include <stdio.h>

// Aqui se define la clase Circulo
class Circulo {
public:
    float radio, area, perimetro;     
    const float PI = 3.1416;          

    void dameRadio() {           
        printf("Dame el Radio del Circulo: ");
        scanf("%f", &radio);
    }

    void calcularArea() {            
        area = PI * radio * radio;
        printf("El Area del Circulo es: %.2f\n", area);
    }

    void calcularPerimetro() {       
        perimetro = 2 * PI * radio;
        printf("El Perimetro del Circulo es: %.2f\n", perimetro);
    }
};

int main() {
    Circulo c;                             // Se crea el objeto de la clase Circulo
    int elige;

    c.dameRadio();                         // Se pide el radio

   
    printf("Que Quieres Calcular?\n");
    printf("1- Area\n");
    printf("2- Perimetro\n");
    printf("Dame una opcion: ");
    scanf("%d", &elige);


    if (elige == 1) {
        c.calcularArea();             
    } else if (elige == 2) {
        c.calcularPerimetro();         
    } else {
        printf("Opcion no Valida.\n"); 
    }

    return 0;                         
}
