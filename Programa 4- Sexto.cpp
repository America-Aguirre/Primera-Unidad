// Programa 5- America Fernanda Aguirre Rosa 37-B
// Lunes 19 Mayo 2025

#include <stdio.h>

int Respuesta;

class Animal {
public:
    int Tipo;
    int Habitat;
    int Dieta;
    int Tamano;

    void Caracteristicas1() {
        printf("Los animales se clasifican en dos tipos \n");
        printf("1- Vivo \n");
        printf("2- Extinto \n");
    }

    void MostrarInformacion() {
        printf("Tipo: %d\n", Tipo);
        printf("Habitat: %d\n", Habitat);
        printf("Dieta: %d\n", Dieta);
        printf("Tamaño: %d\n", Tamano);
    }

    void Clasificacion() {
        printf("Clasificacion de Animales\n");
    }
};

class Invertebrado : public Animal {
public:
    int Exoesqueleto;
    int Patas;
    int Cuerpo;
    int Venenoso;

    void Caracteristicas2() {
        printf("Los Invertebrados se clasifican en dos tipos: \n");
        printf("1- Con Exoesqueleto \n");
        printf("2- Sin Exoesqueleto \n");
    }

    void MostrarInformacionInvertebrado() {
        printf("Exoesqueleto: %d\n", Exoesqueleto);
        printf("Patas: %d\n", Patas);
        printf("Cuerpo: %d\n", Cuerpo);
        printf("Venenoso: %d\n", Venenoso);
    }

    void ClasificacionInvertebrado() {
        printf("Clasificacion de Invertebrados\n");
    }
};

class Vertebrado : public Animal {
public:
    int SangreCaliente;
    int ColumnaVertebral;
    int SistemaNervioso;
    int Extremidades;

    void Caracteristicas3() {
        printf("Los Vertebrados se clasifican en dos tipos: \n");
        printf("1- Con Sangre Caliente \n");
        printf("2- Con Sangre Fria \n");
    }

    void MostrarInformacionVertebrado() {
        printf("Sangre Caliente: %d\n", SangreCaliente);
        printf("Columna Vertebral: %d\n", ColumnaVertebral);
        printf("Sistema Nervioso: %d\n", SistemaNervioso);
        printf("Extremidades: %d\n", Extremidades);
    }

    void ClasificacionVertebrado() {
        printf("Clasificacion de Vertebrados\n");
    }
};

void Pregunta() {
    printf("Sobre que clasificacion quieres preguntar? \n");
    printf("1 = Clase Animal \n");
    printf("2 = SubClase Invertebrado \n");
    printf("3 = SubClase Vertebrado \n");
    scanf("%d", &Respuesta);
}

void Mostrar() {
    Animal animal;
    Invertebrado invertebrado;
    Vertebrado vertebrado;

    if (Respuesta == 1) {
    	animal.Clasificacion();
        animal.Caracteristicas1();
        animal.MostrarInformacion();
       
    } else if (Respuesta == 2) {
    	invertebrado.Clasificacion();
        invertebrado.ClasificacionInvertebrado();
        invertebrado.Caracteristicas2();
        invertebrado.MostrarInformacion();
        invertebrado.MostrarInformacionInvertebrado();
      
    } else if (Respuesta == 3) {
    	vertebrado.Clasificacion();
        vertebrado.ClasificacionVertebrado();
        vertebrado.Caracteristicas3();
        vertebrado.MostrarInformacion();
        vertebrado.MostrarInformacionVertebrado();
    
    }
}

int main() {
    Pregunta();
    Mostrar();
    return 0;
}
