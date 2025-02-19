#include <stdio.h>

int main(void) {
    int a, b;

    printf("Ingrese el valor de a: ");
    scanf("%d", &a);
    printf("Ingrese el valor de b: ");
    scanf("%d", &b);

    if (a > b) {
        printf("El numero %d es mayor que el numero %d\n", a, b);    
    
    } 
    
    if (a < b) {
        printf("El numero %d es menor que el numero %d\n", a, b);  
    }

    if (a == b) {
        printf("El numero %d es igual que el numero %d\n", a, b);  
    }

    return 0;
}

