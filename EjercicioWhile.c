#include <stdio.h>
#include <math.h>

int main(void){

    float num;
    double cuadrado = 0;
    double suma = 0;

    printf("Ingrese un numero (Si desea salir digite 0) \n");
    scanf("%f", &num);

    while (num != 0){
        
        cuadrado = pow(num, 2);

        printf("El cuadrado de %.2f es: %.2f\n", num, cuadrado);
        suma = suma+cuadrado;

        printf("Ingrese un numero (Si desea salir digite 0) \n");
        scanf("%f", &num);

    }

    printf("La suma de los cuadrados es %.2f\n", suma);
    return 0;
    
}