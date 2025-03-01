#include <stdio.h>

int main(void){
    int a;
    
    printf("Digita un numero entero:\n");
    scanf("%d", &a);

    if(a%2==0){
        printf("El numero %d es par", a);
    }
    if(a%2==1){
        printf("El numero %d es impar", a);
    }

    return 0;
}