#include <stdio.h>

int main() {
    float num1, num2;
    float suma, resta, multiplicacion, division;

    printf("Ingrese el primer número: ");
    scanf("%f", &num1);
    printf("Ingrese el segundo número: ");
    scanf("%f", &num2);

    suma = num1 + num2;
    resta = num1 - num2;
    multiplicacion = num1 * num2;

    printf("La suma de %.2f y %.2f es: %.2f\n", num1, num2, suma);
    printf("La resta de %.2f y %.2f es: %.2f\n", num1, num2, resta);
    printf("La multiplicación de %.2f y %.2f es: %.2f\n", num1, num2, multiplicacion);

    if (num2 != 0) {
        division = num1 / num2;
        printf("La división de %.2f entre %.2f es: %.2f\n", num1, num2, division);
    } else {
        printf("Division Error: No se puede dividir entre 0.\n");
    }

    return 0;
}
