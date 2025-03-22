/*
El programa, al recibir como dato un entero positivo, obtiene y escribe
la serie de ULAM.
La sucesión de Ulam es una secuencia de números enteros concebida por el matemático polaco Stanislaw Ulam y publicada en SIAM Review en 1964.
La secuencia comienza con U1=1 y U2=2, y para n > 2, Un es definido como el entero más pequeño que se puede escribir exactamente de una forma como suma de dos términos anteriores diferentes entre sí.
Según la definición, 3=1+2 es un número de Ulam y 4=1+3 también es un número de Ulam (la suma 4=2+2 no cuenta porque los términos previos deben ser distintos). El entero 5 no es un número de Ulam porque 5=1+4=2+3.
Los primeros términos de la secuencia son: 1, 2, 3, 4, 6, 8, 11, 13, 16, 18, 26, 28, 36, 38, 47, 48, 53, 57, 62, 69, 72, 77, 82, 87, 97, 99.
*/

#include <stdio.h>
#include <stdbool.h>

#define MAX_TERMS 1000 // Máximo número de términos a calcular

int main() {
    int ulam[MAX_TERMS];  // Arreglo para almacenar la serie
    int count = 2;        // Contador de términos generados
    int next_num = 3;     // El siguiente número a evaluar
    int num_terms;

    printf("Ingrese la cantidad de términos de la serie de Ulam: ");
    scanf("%d", &num_terms);

    if (num_terms < 2) {
        printf("Debe ingresar al menos 2 términos.\n");
        return 1;
    }

    // Inicializar la serie con los primeros dos términos
    ulam[0] = 1;
    ulam[1] = 2;

    // Generar la serie hasta el número deseado de términos
    while (count < num_terms) {
        int ways = 0; // Contador de formas únicas de representar el número
        
        // Verificar cuántas veces se puede expresar como suma de dos términos previos distintos
        for (int i = 0; i < count; i++) {
            for (int j = i + 1; j < count; j++) {
                if (ulam[i] + ulam[j] == next_num) {
                    ways++;
                    if (ways > 1) break; // Si hay más de una forma, no es un número de Ulam
                }
            }
            if (ways > 1) break;
        }

        // Si se encontró exactamente una forma de expresarlo como suma, es un número de Ulam
        if (ways == 1) {
            ulam[count] = next_num;
            count++;
        }

        // Pasar al siguiente número para evaluar
        next_num++;
    }

    // Imprimir la serie generada
    printf("Serie de Ulam con %d términos:\n", num_terms);
    for (int i = 0; i < num_terms; i++) {
        printf("%d ", ulam[i]);
    }
    printf("\n");

    return 0;
}
