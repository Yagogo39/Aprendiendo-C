#include <stdio.h>
#include <math.h>

int main() {
    
    //Definir los intervalos iniciales
    double a = 50.0, b = 300.0, c;

    //Definir el numero de iteraciones
    int iteraciones = 5;

    // Definir la función
    #define f(x) ((x) - 200)


    for (int i = 0; i < iteraciones; i++) {

        //Obtener a "c"
        c = (a + b) / 2; 
        
        printf("Iteración %d: x = %.4f, f(x) = %.4f\n", i + 1, c, f(c));

        //Determinar en que subintervalo esta la raiz
        if (f(a) * f(c) < 0){
            b = c; 
        }  

        if (f(a) * f(c) > 0){
            a = c; 
        }  
        
    }

    return 0;
}
