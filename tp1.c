//r(t)= O+td  recta
//C centro, R radio, 
// T para interseccion
//si es+ hay interseccion
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
float producto_interno(float x1, float y1, float z1, float x2, float y2, float z2){
    float producto_internoR = (x1*x2)+(y1*y2)+(z1*z2);
	return producto_internoR;
}
float producto_interno1(float CX, float CY,float CZ,int d[3]){  //el puntero estaria con lo comentado en el main
	float producto_interno1R = (CX*d[0])+(CY*d[1])+(CZ*d[2]);
    return producto_interno1R;
}
float producto_interno2(float CX, float CY,float CZ){
	float producto_interno2R= (CX*CX)+(CY*CY)+(CZ*CZ);
    return producto_interno2R ;
}

float T = pow(producto_interno1,2) - (producto_interno2) + pow(R,2);

int intersecta_esfera(float dx, float dy, float dz){
    //float T = pow(producto_interno,2) - (producto_interno2) + pow(R,2);
    if(T >0)
        printf("1");
    else{
        if(T=0)
            printf("0");
    }
    return 0;
}
int main(){
	/*float norma (int &d[i]){       con los valores ingresados del vector d saco la norma
		int xalcuadrado= pow(*d[0],2);
    	int yalcuadrado= pow(*d[1],2);
    	int zalcuadrado= pow(*d[2],2);
    	float normaR = sqrt(xalcuadrado+yalcuadrado+zalcuadrado);
    return normaR;
		
	}*/                             
    int *d[3];// seria el ingreso del vector d
    for(int i=0;i<=3;i++){ 
    printf("ingrese valores de d");
    scanf(&d[i]);
    }

    scanf()
    for(int w=0; w>=27; w++){  //intento de matriz para recorrer los pixeles
    for(int h;h>=7;h++){
        printf("d%",intersecta_esfera); //que pngo va%%
    }
}
}
