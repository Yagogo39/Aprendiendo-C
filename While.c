#include <stdio.h>

/*Suma de Pagos*/
/*El programa debe de recibir como datos un conjunto de pagos realizados
  en el ultimo mes, obtener la suma de los mismos.*/

int main(void){

    float pago, suma;
    suma = 0;

    printf("Ingrese el primer pago:\t");
    scanf("%f", &pago);

    while (pago){

    /*Observa que la condicion es verdadera mientras el pago es
      diferente de cero.*/

        suma = suma + pago;
        printf("Ingrese el siguiente pago:\t");
        scanf("%f", &pago);

        /*Observe que la proposicion que modifica la condicion es una 
          lectura.*/
        
    }
    
    printf("\nEl total de pagos del mes es: %.2f", suma);

    return 0;

}