#include <stdio.h>

int main(void) {


    int i, num;
    long factorial;

    printf("\nIngrese un numero:\n");
    scanf("%d", &num);

    if (num >= 0){
        factorial = 1;
        for (i = 1; i <= num; i++){
            factorial = factorial * i;
        }
        printf("El factorial de %d es: %ld:", num, factorial);
    }
    

    return 0;
}
