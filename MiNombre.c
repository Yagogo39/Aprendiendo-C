#include <stdio.h>
#define TAM_MAXIMO 80
#define TAM_MAXIMO2 80

int main(void){
	char nombre[TAM_MAXIMO];
	char fecha[TAM_MAXIMO2];
	int edad;

	printf("¿Cuál es tu nombre?");
	scanf("%s", &nombre);

	printf("¿Cuál es tu fecha de nacimiento?");
	scanf("%s", &fecha);

	printf("¿Cuál es tu edad?");
	scanf("%d", &edad);

	printf("Tu información es:"\n);
	printf("%s\n", nombre);
	printf("%s\n", fecha);
	printf("%d\n", edad);

	return 0;
}
