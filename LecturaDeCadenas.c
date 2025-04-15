#include <stdio.h>

void main(void){
    char cad[50];
    FILE *ap;
    if ((ap=fopen ("arc.txt", "r")) != NULL){
        /* Se abre el archivo para lectura y se verifica si se abrio correctamente*/
        while (!feof(ap)){
            /* Mientras no se detecte el fin del archivo se diguen leyendo cadenas de caracteres */
            fgets(cad,50,ap);
            puts(cad);
        }
        fclose(ap);
        
    }else{
        printf("No se pudo abrir el archivo");
    }
    
}