#include <stdio.h>

int main (void){

	typedef int ENTERO;
	float valor_f1 = 1.2389, valor_f2 = 5.4321, sumaf;
	ENTERO valor_i1 = 5, valor_i2 = 7, sumai;

	sumaf = valor_f1 + valor_f2;

	printf("%d + %d = %07d \n", valor_i1, valor_i2, sumai);
	printf("%2.2f + %2.4f = %10.1f \n", valor_f1, valor_f2, sumaf);

	return 0;
}

