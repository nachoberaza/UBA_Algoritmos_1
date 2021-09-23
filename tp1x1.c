#include <stdio.h>
#include <math.h>

#define CX  0.5
#define CY  0.75
#define CZ  1.9
#define R   0.8
#define ANCHO 640
#define ALTO 480
#define FOV 90


float norma(float x, float y, float z){
    int xalcuadrado= pow(x,2);
    int yalcuadrado= pow(y,2);
    int zalcuadrado= pow(z,2);
    float normaR = sqrt(xalcuadrado+yalcuadrado+zalcuadrado);
    return normaR;
}
float CC;
float CD;
float producto_interno(float CX, float CY, float CZ, float d[0],float d[1], float d[2]);
float Z=ANCHO/(2*1); //la tangente de (90°/2) es = a 1
float d[3]={-ANCHO/2,-ALTO/2,Z};
float producto_interno(float CX, float CY, float CZ, float d[0],float d[1], float d[2]){
    CD=(CX*d[0])+(CY*d[1])+(CZ*d[2]);
    CC=(CX*CX)+(CY*CY)+(CZ*CZ);
    return 0;
}
int main(void){
for(d[0];d[0]>= 640;d[0]++){  //no se si asi se cambia el valor de un vector 
    for(d[1];d[1]<=480;d[1]++){
        float T = pow(CD,2)-CC+pow(R,2);
        if(T>= 0){
            printf("1");
        }
        else{
            printf("0");
        }

    }
}
}
