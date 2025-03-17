#include <stdio.h>

int main() {
    float x, y, resultado;
    char op;
    int valido = 1;
    
    printf("Esta es una calculadora simple, para sumar ingrese +, para restar -, para dividir /, para multiplicar * o x\n");
    printf("Ingrese operacion: ");
    scanf(" %c", &op);
    printf("Ingrese x: ");
    scanf("%f", &x);
    printf("Ingrese y: ");
    scanf("%f", &y);

    switch (op) {
        case '+':
            resultado = x + y;
            break;
        case '-':
            resultado = x - y;
            break;
        case '*':
        case 'x':
            resultado = x * y;
            break;
        case '/':
            if (y != 0)
                resultado = x / y;
            else {
                printf("Error: division por cero\n");
                return 1;
            }
            break;
        default:
            valido = 0;
    }

    if (valido)
        printf("El resultado es %f\n", resultado);
    else
        printf("Operacion invalida\n");

    return 0;
}
