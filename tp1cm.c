#include <stdio.h>
#include <math.h>

#define CX 0.5
#define CY 0.75
#define CZ 1.9
#define R 0.8
#define ancho 640
#define alto 480

int X = -ancho / 2; 
int Y = alto / 2;
float Z = 320;

float norma(float X, float Y, float Z){ 
    float xcuadrado = pow(X, 2);
    float ycuadrado = pow(Y, 2);
    float zcuadrado = pow(Z, 2);
    float normaR = sqrt(xcuadrado + ycuadrado + zcuadrado);
    return normaR;
}

float producto_interno(float X, float Y, float Z,float normaR){
    float versorX = X/normaR;
    float versorY = Y/normaR;
    float versorZ = Z/normaR;
    float prodint = (CX * versorX) + (CY * versorY) + (CZ * versorZ);
    return prodint;
}

float interseccion(float CD, float CC){ 
    float T = pow(CD, 2) - CC + pow(R, 2);

    if (T >= 0){
        printf("1 ");                         
    } else{
        printf("0 ");                          
    }
    return 0;         
}

int main(){ 
    printf("P1 \n");
    printf("640 480 \n");
            
    for (Y; Y>-240; Y--){   
        for (X; X<320; X++){ 
            float normaR = norma(X,Y,Z);
            float CD = producto_interno(X,Y,Z,normaR);
            float CC = producto_interno(CX,CY,CZ,1);
            interseccion(CD, CC);
        }
        printf("\n");
    }
    return 0;
}