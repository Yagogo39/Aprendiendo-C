#include <stdio.h>

int main(void){

    /*recibir como datos N números enteros, obtenga solamente la 
    suma de los números positivos.*/

    int i;
    int datos;
    float llenado_de_datos;
    float suma = 0;

    printf("Cantidad de datos: \n");
    scanf("%d", &datos);

    for(i = 1; i<=datos; i++){

        printf("Digite el dato numero %d (positivo o negativo):\n", i);
        scanf("%f", &llenado_de_datos);

        if (llenado_de_datos>0){
            suma = suma + llenado_de_datos;
        }
        
    }

    printf("Suma de numeros positivos:   %f\n", suma);
    return 0;
}