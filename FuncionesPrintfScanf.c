#include <stdio.h>
#define TAM_MAXIMO 80

int main(void){
	char cadena[TAM_MAXIMO];
	int x, y;
	float z;

	printf("Introduzca dos enteros separados por un espacio: ");
	scanf("%d %d", &x, &y);

	printf("Introduzca un valor flotante: ");
	scanf("%f",&z);

	printf("Introduzca una cadena: ");
	scanf("%s",cadena);

	printf("Usted introdujo: ");
	printf("%d %d\t%.3f\t%s\n",x,y,z,cadena);

	return 0;
}
