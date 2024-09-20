// Nivaldo Neto - Arquitetura de computadores

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// Função para converter de base 10 para binário
void decimalParaBinario(int num) {
    printf("Binario: ");
    for (int i = 31; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
    printf("\n");
}

// Função para converter de base 10 para octal
void decimalParaOctal(int num) {
    printf("Octal: %o\n", num);
}

// Função para converter de base 10 para hexadecimal
void decimalParaHexadecimal(int num) {
    printf("Hexadecimal: %X\n", num);
}

// Função para converter de base 10 para BCD (Binary Coded Decimal)
void decimalParaBCD(int num) {
    printf("BCD: ");
    while (num > 0) {
        int digito = num % 10;
        for (int i = 3; i >= 0; i--) {
            printf("%d", (digito >> i) & 1);
        }
        printf(" ");
        num /= 10;
    }
    printf("\n");
}

// Função para converter decimal para complemento a 2 (16 bits)
void complementoDois(int num) {
    unsigned short int resultado;

    if (num >= 0) {
        resultado = (unsigned short int)num; // Se for positivo, converte diretamente
    } else {
        resultado = (unsigned short int)(~(-num) + 1); // Se for negativo, aplica complemento a 2
    }

    printf("Complemento a 2 (16 bits): ");
    for (int i = 15; i >= 0; i--) {
        printf("%d", (resultado >> i) & 1);
    }
    printf("\n");
}

// Função para converter número real para float e mostrar sinal, expoente e fração
void mostrarFloat(float num) {
    unsigned int bits;
    memcpy(&bits, &num, sizeof(bits));

    unsigned int sinal = (bits >> 31) & 1;
    unsigned int expoente = (bits >> 23) & 0xFF;
    unsigned int fracao = bits & 0x7FFFFF;

    printf("Float:\n");
    printf("Sinal: %u\n", sinal);
    printf("Expoente (com viés de 127): %u\n", expoente);
    printf("Fracao: %X\n", fracao);
}

// Função para converter número real para double e mostrar sinal, expoente e fração
void mostrarDouble(double num) {
    unsigned long long bits;
    memcpy(&bits, &num, sizeof(bits));

    unsigned long long sinal = (bits >> 63) & 1;
    unsigned long long expoente = (bits >> 52) & 0x7FF;
    unsigned long long fracao = bits & 0xFFFFFFFFFFFFF;

    printf("Double:\n");
    printf("Sinal: %llu\n", sinal);
    printf("Expoente (com viés de 1023): %llu\n", expoente);
    printf("Fracao: %llX\n", fracao);
}

int main() {
    int opcao;
    int numeroDecimal;
    float numeroFloat;
    double numeroDouble;

    do {
        printf("\n--- Calculadora Programador Didática ---\n");
        printf("1. Converter de base 10 para outras bases\n");
        printf("2. Converter numero real para float\n");
        printf("3. Converter numero real para double\n");
        printf("4. Converter de base 10 para complemento a 2 (16 bits)\n");
        printf("5. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite um numero decimal: ");
                scanf("%d", &numeroDecimal);

                decimalParaBinario(numeroDecimal);
                decimalParaOctal(numeroDecimal);
                decimalParaHexadecimal(numeroDecimal);
                decimalParaBCD(numeroDecimal);
                break;

            case 2:
                printf("Digite um numero real (float): ");
                scanf("%f", &numeroFloat);
                mostrarFloat(numeroFloat);
                break;

            case 3:
                printf("Digite um numero real (double): ");
                scanf("%lf", &numeroDouble);
                mostrarDouble(numeroDouble);
                break;

            case 4:
                printf("Digite um numero decimal: ");
                scanf("%d", &numeroDecimal);
                complementoDois(numeroDecimal);
                break;

            case 5:
                printf("Saindo...\n");
                break;

            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 5);

    return 0;
}
