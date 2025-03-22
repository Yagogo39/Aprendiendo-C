/* Pares e impares.
El programa, al recibir como datos N números enteros, obtiene la suma de los
➥números pares y calcula el promedio de los impares.
*/

#include <stdio.h>

int main(void){
    int numeros, i, dato, sumaPares = 0, sumaImpares = 0, numImp = 0;
    double promedio = 0.0;
    
    printf("Ingrese la cantidad de datos:\n");
    scanf("%d", &numeros);

    if(numeros > 0){
        for (i = 1; i <= numeros; i++){
            printf("Ingrese el dato %d:\n", i);
            scanf("%d", &dato);
            if ((dato % 2)==0) {
                sumaPares = sumaPares + dato;
            }
            else{
                
                sumaImpares = sumaImpares + dato;
                numImp++;
            }
            

        }

        promedio = sumaImpares / numImp;

        printf("La suma de los numeros pares que ingresaste es:\n %d\n", sumaPares);
        printf("El promedio de los numeros impares que ingresaste es:\n %lf", promedio);

        
    }

    return 0;
}
