#include <stdio.h>

int main(void){

    /*Nomina*/
    /*El programa debe de recibir el salario de 15 personas, sumar y dar el total*/

    int i;
    float salario, nomina;

    nomina = 0;

    for (i = 1; i < 16; i++){
        
        printf("Salario No. %d\n", i);
        scanf("%f", &salario);

        nomina = nomina + salario;
    }
    
    printf("Nomina: %f", nomina);

    return 0;
}