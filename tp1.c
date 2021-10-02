#include <stdio.h>
#include <math.h>

#define CX 0.5
#define CY 0.75
#define CZ 1.9
#define R 0.8
#define ANCHO 640
#define ALTO 480
#define FOV 90

int X= -ANCHO / 2; 
int Y= ALTO / 2;
float  Z = 320;

float norma(float X, float Y, float Z){ //funcion que calcula la norma del vectovector de valores XYZ
    float xalcuadrado = X*X;
    float yalcuadrado = Y*Y;
    float zalcuadrado = Z*Z;
    float normaR = sqrt(xalcuadrado + yalcuadrado + zalcuadrado);
return normaR; //retorno el valor
}
float producto_interno(float X, float Y, float Z,float normaR){ //funcion que calcula productos internos le pase el valor que retorna la funcion norma
       float versorX= X/normaR;
        float versorY= Y/normaR;
        float versorZ= Z/normaR;
        float prodint=(CX* versorX) + (CY * versorY) + (CZ * versorZ);
return prodint;
}
float interseccion(float prodint, float normaR,float CD,float CC){
     float T = producto_interno(X,Y,Z,normaR)-producto_interno(CX,CY,CZ,1)+(R*R);
     //formulita para calcular una interseccion--a la segunda le mande como ultimo parametro 1 para que no me rompa las bolas el valor norma
           
            if (T >= 0)                          
            {
                printf("1 ");                         
            }
            else
            {
                printf("0 ");                          
            }
   return 0;         
}

int main()//seguro esta mal el tema de los parametros pero pero no se 
{
    printf("P1 \n");
    printf("640 480 \n");
            

     for (Y; Y > -240; Y--)//los dos for son para recorrer una pantalla(matriz)pixel por pixel,    
    { 
        for (X; X <320; X++)                     
        {   
            float normaR=norma(X,Y,Z); //calculo norma
            float prodint=producto_interno(X,Y,Z,normaR);
            float CD=producto_interno(X,Y,Z,normaR);//aplico producto interno entre
            float CC=producto_interno(CX,CY,CZ,1);//aplico el segundo producto
            interseccion(prodint,normaR,CD,CC);//aplico 

        }
        printf("\n");
    }
    return 0;
}

/*int main()
{
    printf("P1 \n");
    printf("640 480 \n");
            float  Z = 320;

     for (int Y= ALTO / 2; Y > -240; Y--) // for (int j=-320; j <= 640; j++)                             //recorro las X desde -ancho/2 hasta el final
    { 
        for (int X= -ANCHO / 2; X <320; X++)  //for (int u=-240; u <= 480; u++)                      //recorro las y desde -alto/2 hasta el final
        { 
                  //printf("%f ",X );
                    float xalcuadrado = X*X;//pow(X, 2);
                    float yalcuadrado = Y*Y;//pow(Y, 2);
                    float zalcuadrado = Z*Z;//pow(Z, 2);
                    float normaR = sqrt(xalcuadrado + yalcuadrado + zalcuadrado);

                    float versorX= X/normaR;
                    float versorY= Y/normaR;
                    float versorZ= Z/normaR;
                    //printf("%0.1f",versorX);

            float CD = (CX * versorX) + (CY * versorY) + (CZ * versorZ);
            float CC = (CX * CX) + (CY * CY) + (CZ * CZ);
            //printf("%0.3f\n",CD);

            float T = (CD*CD)-CC+(R*R);//pow(CD, 2) - CC + pow(R, 2);  //interseccion
           //printf("%0.4f",T);
            if (T >= 0)                                //comprovar si existe interseccion
            {
                printf("1 ");                         //1 si interseca
            }
            else
            {
                printf("0 ");                          //0 si no interseca
            }


        }
        printf("\n");
    }
    return 0;
}*/