#include <stdio.h>

void main(void){
    char p1;
    FILE *ar;
    if ((ar = fopen("arc.txt", "r")) != NULL){
        while (!feof(ar)){
            /* Se leen caracteres mientras no se detecte el fin del archivo*/
            p1 = fgetc(ar);
            putchar(p1);
        }
        fclose(ar);
        
    }else{
        printf("No se puede abrir el archivo");
    }
    
}