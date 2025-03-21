#include <stdio.h>
#include <math.h>

// Definimos la función g(x) que deriva de f(x) para usarla en el método de aproximaciones sucesivas
double g(double x) {
    return (exp(-x)-x); 
}

int main() {
    double x0 = 0.5, x1, tolerance = 0.0001; // Asignamos un valor inicial fijo x0
    int max_iter = 100, iter = 0;

    // Calculamos la primera aproximación
    x1 = g(x0);

    // Mostramos el valor inicial (antes de la primera iteración)
    printf("Iteracion 0: x = %lf\n", x0);
    // Calculamos y mostramos la tolerancia en la primera iteración
    double tolerance_current = fabs((x1 - x0) / x1);
    printf("Iteracion 1: x = %lf, Tolerancia = %lf\n", x1, tolerance_current);

    // Iteramos hasta que la diferencia relativa entre dos aproximaciones sucesivas sea menor que la tolerancia
    while (tolerance_current >= tolerance && iter < max_iter) {
        x0 = x1;
        x1 = g(x0);
        iter++;

        // Calculamos la tolerancia relativa: |(x_{i+1} - x_i) / x_{i+1}|
        tolerance_current = fabs((x1 - x0) / x1);

        // Mostramos los valores intermedios de x y la tolerancia
        printf("Iteracion %d: x = %lf, Tolerancia = %lf\n", iter + 1, x1, tolerance_current);
    }

    if (iter == max_iter) {
        printf("El método no ha convergido después de %d iteraciones.\n", max_iter);
    } else {
        printf("La aproximación final es x = %lf\n", x1);
        printf("El número de iteraciones fue: %d\n", iter + 1); // +1 porque empezamos a contar desde 0
    }

    return 0;
}
