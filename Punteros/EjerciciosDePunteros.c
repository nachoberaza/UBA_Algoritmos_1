#include <stdio.h>

/*
    Mira que si no me haces este ejercicio como a mi me gusta, te clavo un 1
    Registrado. tengo dudas de la vida
*/

int mostrar(int &matrix,int &punteroDePosicion, int &subPunteroPosicion);

int main(){

    int vector [3][4]={ {1,2,3,4},{5,6,7,8},{9,10,11,12} };

    int *dos_ptr;

    int (*ptr2vector)[4];

    mostrar(*vector,ptr2vector,dos_ptr);

    return 0;
}

int mostrar(int &matrix,int &punteroDePosicion,int &subPunteroPosicion){

    //Primer elemnto del vector de vectores 
    punteroDePosicion = matrix;

    for(int i=0; i<3; i++,punteroDePosicion){

        for(int j=0 ; j<4 ; j++,subPunteroPosicion){
            putchar('\t');
            printf("%d",*subPunteroPosicion);
        }
        putchar('\n');
    }

    return 0;
}
