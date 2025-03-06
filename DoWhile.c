#include <stdio.h>

/*Suma de pagos*/
/*El programa obtiene la suma de los pagos realizados el ultimo mes*/

int main(void){

    float pago, suma = 0;
    printf("Ingrese el primer pago:\n");
    scanf("%f", &pago);

    do{
        suma += pago;
        printf("Ingrese el siguiente pago (0 para terminar):\n");
        scanf("%f", &pago);
    }
    while (pago);
        
        printf("El total de pagos del mes es:%.3f", suma);

    return 0;

}