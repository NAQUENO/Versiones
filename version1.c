#include <stdio.h>

int main() {
    int num1, num2;
    int suma, resta;

    // Solicitar los números al usuario
    printf("Ingrese el primer número: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);

    // Calcular suma y resta
    suma = num1 + num2;
    resta = num1 - num2;

    // Mostrar los resultados
    printf("La suma de %d y %d es: %d\n", num1, num2, suma);
    printf("La resta de %d y %d es: %d\n", num1, num2, resta);

    return 0;
}