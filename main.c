#include <stdio.h>
#include "funciones.h"
#define N 5 

int main (int argc, char *argv[]) {

    float xPunto[N];
    float yPunto[N];
    for (int i=0;i<N;i++){
        xPunto[i]=leerComponente('X',i);
        yPunto[i]=leerComponente('Y',i);
    }
    obtenerSegmentoMayor(xPunto,yPunto,N);
    obtenerSegmentoMenor(xPunto,yPunto,N);
    return 0;
}

