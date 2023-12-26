#include <stdio.h>

float ans = 0;

float soma(float a, float b) {
    return a + b;
}

float subtracao(float a, float b) {
    return a - b;
}

float multiplicacao(float a, float b) {
    return a * b;
}

float divisao(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Erro: divisão por zero!\n");
        return 0; // Retornando 0 em caso de divisão por zero
    }
}

int main() {
    char operador;
    float num1, num2, resultado;

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);         

    while (1) {
        printf("Operador (+, -, *, /, 'C' para limpar, 'F' para finalizar): ");
        scanf(" %c", &operador);

        if (operador == 'F') {
            printf("Encerrando a calculadora.\n");
            break;
        }

        if (operador != 'C') {
            printf("Digite o próximo número: ");
            scanf("%f", &num2);
        }

        switch (operador) {
            case '+':
                num1 = soma(num1, num2);
                printf("Resultado: %.2f\n", num1);
                break;
            case '-':
                num1 = subtracao(num1, num2);
                printf("Resultado: %.2f\n", num1);
                break;
            case '*':
                num1 = multiplicacao(num1, num2);
                printf("Resultado: %.2f\n", num1);
                break;
            case '/':
                num1 = divisao(num1, num2);
                printf("Resultado: %.2f\n", num1);
                break;
            case 'C':
                num1 = 0;
                printf("ANS limpo.\n");
                break;
            default:
                printf("Operador inválido!\n");
                break;
        }
    }

    return 0;
}
