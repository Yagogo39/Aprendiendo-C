/* Cubo-1.
El programa calcula el cubo de los 10 primeros números naturales con la
ayuda de una función. En la solución del problema se utiliza una variable
global, aunque esto, como veremos más adelante, no es muy recomendable. */

#include <stdio.h>

int cubo(void);
int i;

int main(void){
    int cub;
    for(i = 1; i < 11; i++){
        cub = cubo();
        printf("\nEl cubo de %d es: %d", i, cub);    
    }
}

int cubo(void){
    return (i*i*i);
}