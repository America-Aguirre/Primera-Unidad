#include <stdio.h>

// Aqui se define la clase Triangulo
class Triangulo 
{
public:
    float base, altura, area;              

    void DameBase() 
	{           
        printf("Dame la Base del Triangulo: ");
        scanf("%f", &base);
    }
    
    void DameAltura() 
	{           
        printf("Dame la Altura del Triangulo: ");
        scanf("%f", &altura);
    }


    void calcularArea() 
	{            
        area = (base * altura) / 2;
        printf("El Area del Triangulo es: %.2f\n", area);
    }

};

int main() {
    Triangulo c;                             // Se crea el objeto de la clase Triangulo

c.DameBase();
c.DameAltura();

c.calcularArea();    
    
    return 0;                         
}
//Desarrollar un programa que me permita calcular el area de un triangulo a partir de la longitud de la base y la altura

