#include <stdio.h>

#define val 10
#define floatVal 4.5
#define charVal 'G' //Comillas simples a  la hora de definir un caracter
#define stringVal "ABC" //Cominllas dobles para cadenas de caracteres

int main(void){
	printf("Constante de tipo int: %d\n", val);
	printf("Constante de tipo punto flotante: %.lf\n", floatVal);
	printf("Constante de tipo caracter: %c\n", charVal);
	printf("Constante de tipo cadena de caracteres: %s\n", stringVal);

	return 0;
}

