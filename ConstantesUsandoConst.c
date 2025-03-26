#include <stdio.h>

//Constantes

int main(){
	const int val =10;
	const float floatVal = 4.5;
	const char charVal = 'G';
	const char stringVal[10] = "ABC";

	printf("Constante entera: %d\n", val);
	printf("Constante de punto flotante: %.lf\n", floatVal);
	printf("Constante caracter: %c\n", charVal);
	printf("Cadena Constante: %s\n", stringVal);

	return 0;
}
