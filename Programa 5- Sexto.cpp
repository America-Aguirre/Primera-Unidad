// Programa 5- America Fernanda Aguirre Rosa 37-B
// Martes 20 Mayo 2025

#include <stdio.h>

class Deporte {
public:
    int NumeroDeJugadores;
    int Lugar;
    int Olimpico;

    void MostrarInformacion() {
        printf("Numero de jugadores: %d\n", NumeroDeJugadores);
        printf("Lugar: %d\n", Lugar);
        printf("Olímpico: %d\n", Olimpico);
    }

    void Jugar() {
        printf("Se esta jugando un deporte con balon\n");
    }

    void Describir() {
        printf("Este deporte se juega con un balon\n");
    }
};

class Pie : public Deporte {
public:
    void TocarConPie() {
        printf("Se toca el balon con el pie\n");
    }

    void MostrarDeporteConPie() {
        printf("Deporte que se juega con el pie\n");
    }

    void EjemplosDeportesConPie() {
        printf("Ejemplos: Futbol, Futbol sala, Futbol playa\n");
    }
};

class Mano : public Deporte {
public:
    void TocarConMano() {
        printf("Se toca el balon con la mano\n");
    }

    void MostrarDeporteConMano() {
        printf("Deporte que se juega con la mano\n");
    }

    void EjemplosDeportesConMano() {
        printf("Ejemplos: Baloncesto, Balonmano, Voleibol\n");
    }
};

int main() {
	
	Deporte deporte;
	Pie pie;
	Mano mano;
	
    deporte.MostrarInformacion();
    deporte.Jugar();
    deporte.Describir();
    printf("\n");
    
    pie.TocarConPie();
    pie.MostrarDeporteConPie();
    pie.EjemplosDeportesConPie();
    printf("\n");
    
    mano.TocarConMano();
    mano.MostrarDeporteConMano();
    mano.EjemplosDeportesConMano();
    printf("\n");
    
    return 0;
}
