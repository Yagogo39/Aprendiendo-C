#include <stdio.h>

int main(void){

    int i, primero = 0, segundo = 1, siguiente;

    printf("\t %d \t %d", primero, segundo);

    for (i = 3; i < 50; i++)
    {
        siguiente  = primero + segundo;
        primero = segundo;
        segundo = siguiente;
        printf("\t %d", siguiente);
    }
    

    return 0;
}