#include <stdio.h>

int main() {
    int num1, num2;
    int suma, resta;

    printf("Ingrese el primer número: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);

    suma = num1 + num2;
    resta = num1 - num2;

    printf("La suma de %d y %d es: %d\n", num1, num2, suma);
    printf("La resta de %d y %d es: %d\n", num1, num2, resta);

    return 0;
}