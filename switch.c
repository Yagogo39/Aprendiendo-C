#include <stdio.h>

double num1, num2, resultado;
int opcion;

int main(void){

    printf("Digite dos numeros:\n");
    scanf("%lf %lf", &num1, &num2);

    printf("Escoga una de las opciones:\n");
    printf("1.- Suma\n");
    printf("2.- Resta\n");
    printf("3.- Multiplicacion\n");
    printf("4.- Division\n");

    scanf("%d", &opcion);

    switch (opcion)
    {
    case 1:
        resultado = num1+num2;
        break;
    case 2:
        resultado = num1-num2;
        break;
    case 3:
        resultado = num1*num2;
        break;
    case 4:

        if(num2==0){
            printf("No se puede dividir por cero");
            return 1;
            break;
        }
        resultado = num1/num2;
        break;
    
    default:
        printf("Digita una opcion valida\n");
        return 1;
        break;
    }

    printf("El resultado de la opcion %d es %lf", opcion, resultado);
    return 0;
}