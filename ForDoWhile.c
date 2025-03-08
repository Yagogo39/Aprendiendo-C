#include <stdio.h>

/*Lanzamiento de martillo*/
/*Al recibir como dato N lanzamientos de martillo, calcule el promedio
de los lanzamientos de la atleta*/

int main(void){

    int i, n;
    float lanzamiento, suma = 0;

    do{
        printf("Ingrese el numero de lanzamientos: ");
        scanf("%d", &n);
    }
    while (n < 1 || n > 11);

    for(i = 1; i <= n; i++){

        printf("\nIngrese el lanzamiento %d: ", i);
        scanf("%f", &lanzamiento);
        suma += lanzamiento;

    }
    
    suma = suma / n;
    printf("\nEl promedio de lanzamientos es: %.2f", suma);

    return 0;

}