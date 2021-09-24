#include <stdio.h>
#include <math.h>

#define CX 0.5
#define CY 0.75
#define CZ 1.9
#define R 0.8
#define ANCHO 640
#define ALTO 480
#define FOV 90

float norma(float x, float y, float z)
{
    int xalcuadrado = pow(x, 2);
    int yalcuadrado = pow(y, 2);
    int zalcuadrado = pow(z, 2);
    float normaR = sqrt(xalcuadrado + yalcuadrado + zalcuadrado);
    return normaR;
}

float CC;			  //variable para producto interno C*C

float CD; 			  //variable para producto interno C*D


float  Z = ANCHO / 2; //la tangente de (90°/2) es = a 1

float X= -ANCHO / 2; //coordenada de donde empiezan las X

float Y= -ALTO / 2; //coordenada donde empiezan las Y

float producto_interno( float X,  float Y, float Z)
{
    CD = (CX * X) + (CY * Y) + (CZ * Z);
    CC = (CX * CX) + (CY * CY) + (CZ * CZ);
    return 0;
}

int main(void)
{
    printf("p1 \n");
    printf("640x480 \n");

    for (X; X <= 640; X++) 							//recorro las X desde -ancho/2 hasta el final
    { 
        for (Y; Y <= 480; Y++)  					//recorro las y desde -alto/2 hasta el final
        {
            float T = pow(CD, 2) - CC + pow(R, 2);  //interseccion
            //temita con la cuentaaa****************dan todos positivos, lo comprove con print cd y cc
            if (T >= 0)								//comprovar si existe interseccion
            {
                printf("1"); 						//1 si interseca
            }
            else
            {
                printf("0");  						//0 si no interseca
            }
        }
    }
}
