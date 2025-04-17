#include <stdio.h>

/*
El programa leerá los datos de alumnos almacenados en un archivo 
y escribirá la matrícula y promedio de cada alumno.
*/

int main(void){
    int i, j, n, mat;
    float cal, pro;

    FILE *ar;
    if ((ar = fopen("arc8.txt", "r")) != NULL){
        fscanf(ar, "%d", &n); // cantidad de alumnos
        for (i = 0; i < n; i++){
            fscanf(ar, "%d", &mat); // matrícula del alumno
            printf("%d\t", mat);
            pro = 0;
            for (j = 0; j < 5; j++){ // ahora usamos j, correctamente
                fscanf(ar, "%f", &cal); // 5 calificaciones
                pro += cal;
            }
            printf("%.2f\n", pro / 5); // promedio con dos decimales
        }
        fclose(ar);
    }
    else {
        printf("No se puede abrir el archivo");
    }

    return 0;
}
