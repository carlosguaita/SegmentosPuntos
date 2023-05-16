#include <stdio.h>
#include <math.h>
#include "funciones.h"

float leerComponente(char eje, int punto){
    float componente;
    printf("Ingrese la component %c del punto %d: ",eje,punto);
    fflush(stdin);
    scanf("%f",&componente);
    return componente;
}

void obtenerSegmentoMayor(float xPunto[], float yPunto[], int dim){
    float seg;
    float numMayor;
    int z=0;
    for (int i=0; i<dim-1;i++){
        for (int j=i+1;j<dim;j++){
            seg=obtenerDistancia(xPunto[i],yPunto[i],xPunto[j],yPunto[j]);
            printf("z=%d seg: %f\n",z,seg);
            if(z==0){
                numMayor=seg;
            }else if (seg>=numMayor){
                numMayor=seg;
            }
            z++;
        }
    }
    printf("El segmento mayor es: %f\n",numMayor);
}

void obtenerSegmentoMenor(float xPunto[], float yPunto[], int dim){
    float seg;
    float numMayor;
    int z=0;
    for (int i=0; i<dim-1;i++){
        for (int j=i+1;j<dim;j++){
            seg=obtenerDistancia(xPunto[i],yPunto[i],xPunto[j],yPunto[j]);
            if(z==0){
                numMayor=seg;
            }else if (seg<=numMayor){
                numMayor=seg;
            }
            z++;
        }
    }
    printf("El segmento menor es: %f\n",numMayor);
}

float obtenerDistancia(float x1, float y1, float x2, float y2){
    float d = sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    return d;
}