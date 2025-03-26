/* Calificaciones.
El programa, al recibir un grupo de calificaciones de un alumno, obtiene el pro-
medio de calificaciones de cada uno de ellos y, además, los alumnos con el mejor
y peor promedio.
*/

#include <stdio.h>

int main(void){
    int i, mat, mamat, memat;
    float sum, pro, cal, mapro=0.0, mepro= 11.0;

    printf("Ingrese la matricula del primer alumno:\t");
    scanf("%d", &mat);

    while (mat){
        sum = 0;
        for (i = 1; i <= 6; i++){
            printf("Ingrese la calificacion del alumno: ", i);
            scanf("%f", &cal);

            sum = sum + cal;
        }

        pro = sum / 5;
        printf("\nMatricula:%d\tPromedio:%5.2f", mat, pro);

        if (pro > mapro){
            mapro = pro;
            mamat = mat;
        }
        if (pro < mepro){
            mepro = pro;
            memat = mat;
        }

        printf("\n\nIngrese la matricula del siguiente alumno: ");
        scanf("%d", &mat);

    }

    printf("\n\nAlumno con mejor promedio:\t%d\t%5.2f", mamat, mapro);
    printf("\n\nAlumno con peor promedio:\t%d\t%5.2f", memat, mepro);

    
}