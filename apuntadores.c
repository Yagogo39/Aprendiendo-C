#include <stdio.h>

int main(){

	int i = 5;
	int *p, *q;

	p = &i;

	printf("%p\n", (void *)p);

	return 0;
}
