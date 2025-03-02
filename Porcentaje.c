#include <stdio.h>

/*Incremento de precio*/
/*El programa debe de recibir un precio, se incrementa el 11& si el precio es menor a 1500*/

double precio;
double nuevo;

int main(void){

    printf("Escriba el precio del articulo:\n");
    scanf("%lf", &precio);

    if(precio < 1500){
        nuevo = precio * 1.11;
        printf("El precio del articulo se ha actualizado\n");
        printf("Nuevo precio %lf\n", nuevo);
    }else{
        printf("EL precio del articulo se ha mantenido\n");
        printf("Precio: %.2f\n", precio);
    }
    return 0;
}