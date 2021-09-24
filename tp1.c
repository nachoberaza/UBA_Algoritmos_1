#include <stdio.h>
#include <math.h>

#define CX 0.5
#define CY 0.75
#define CZ 1.9
#define R 0.8
#define ANCHO 640
#define ALTO 480
#define FOV 90

float normaR;
float norma(float x, float y, float z)
{
    int xalcuadrado = pow(x, 2);
    int yalcuadrado = pow(y, 2);
    int zalcuadrado = pow(z, 2);
     normaR = sqrt(xalcuadrado + yalcuadrado + zalcuadrado);
    return normaR;
}

float CC;			  //variable para producto interno C*C

float CD; 			  //variable para producto interno C*D


float  Z = ANCHO / 0.027; //la tangente de (90°/2) es = a 1 //0.027 es tg((90pi/180)/2)

float X= -ANCHO / 2; //coordenada de donde empiezan las X

float Y= -ALTO / 2; //coordenada donde empiezan las Y

/*float producto_interno( float X,  float Y, float Z)
{
    CD = (CX * X) + (CY * Y) + (CZ * Z);
    CC = (CX * CX) + (CY * CY) + (CZ * CZ);
    return 0;
}*/

int main(void)
{
    printf("p1 \n");
    printf("640x480 \n");
    
     for (int j=320; j <= 640; j++) 							//recorro las X desde -ancho/2 hasta el final
    { 
        for (int u=240; u <= 480; u++)  					//recorro las y desde -alto/2 hasta el final
        {	
        	CD = (CX * normaR) + (CY * normaR) + (CZ * normaR);
    		CC = (CX * CX) + (CY * CY) + (CZ * CZ);
        	/*X++;
        	Y++;*/
        	
            float T = pow(CD, 2) - CC + pow(R, 2);  //interseccion
            //temita con la cuentaaa****************dan todos positivos, lo comprove con print cd y cc
            //printf("%f",T);
            if (T >= 0)								//comprovar si existe interseccion
            {
                printf("1"); 						//1 si interseca
            }
            else
            {
                printf("0");  						//0 si no interseca
            }
                    
        	Y++;
        }
        X++;
    }

    /*for (X; X <= 640; X++) 							//recorro las X desde -ancho/2 hasta el final
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
    }*/
    return 0;
}
