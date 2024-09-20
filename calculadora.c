// Nivaldo Neto - Arquitetura de computadores

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// Função para converter decimal para binário
void decimalParaBinario(int num) {
    int binario[32];
    int i = 0;
    
    // Conversão de decimal para binário
    while (num > 0) {
        binario[i] = num % 2;
        num = num / 2;
        i++;
    }
    
    // Exibindo o binário
    printf("Binário: ");
    for (int j = i - 1; j >= 0; j--)
        printf("%d", binario[j]);
    printf("\n");
}

// Função para converter decimal para octal
void decimalParaOctal(int num) {
    int octal[32];
    int i = 0;
    
    // Conversão de decimal para octal
    while (num > 0) {
        octal[i] = num % 8;
        num = num / 8;
        i++;
    }
    
    // Exibindo o octal
    printf("Octal: ");
    for (int j = i - 1; j >= 0; j--)
        printf("%d", octal[j]);
    printf("\n");
}

// Função para converter decimal para hexadecimal
void decimalParaHexadecimal(int num) {
    char hexa[32];
    int i = 0;
    
    // Conversão de decimal para hexadecimal
    while (num > 0) {
        int temp = 0;
        temp = num % 16;
        
        if (temp < 10)
            hexa[i] = temp + 48;
        else
            hexa[i] = temp + 55;
        
        num = num / 16;
        i++;
    }
    
    // Exibindo o hexadecimal
    printf("Hexadecimal: ");
    for (int j = i - 1; j >= 0; j--)
        printf("%c", hexa[j]);
    printf("\n");
}

// Função para converter decimal para BCD
void decimalParaBCD(int num) {
    int bcd[32];
    int i = 0;
    
    // Conversão de decimal para BCD
    while (num > 0) {
        bcd[i] = num % 10;
        num = num / 10;
        i++;
    }
    
    // Exibindo o BCD
    printf("BCD: ");
    for (int j = i - 1; j >= 0; j--) {
        for (int k = 3; k >= 0; k--)
            printf("%d", (bcd[j] >> k) & 1);
        printf(" ");
    }
    printf("\n");
}

// Função para mostrar os detalhes de um número real em float/double
void mostrarBitsFloat(float num) {
    union {
        float f;
        unsigned int i;
    } conv;
    conv.f = num;
    
    printf("Float: %.6f\n", num);
    printf("Bits de sinal: %d\n", (conv.i >> 31) & 1);
    printf("Expoente (com viés): %d\n", (conv.i >> 23) & 0xFF);
    printf("Fração: 0x%x\n", conv.i & 0x7FFFFF);
}

void mostrarBitsDouble(double num) {
    union {
        double d;
        unsigned long long i;
    } conv;
    conv.d = num;
    
    printf("Double: %.15f\n", num);
    printf("Bits de sinal: %d\n", (conv.i >> 63) & 1);
    printf("Expoente (com viés): %lld\n", (conv.i >> 52) & 0x7FF);
    printf("Fração: 0x%llx\n", conv.i & 0xFFFFFFFFFFFFF);
}

int main() {
    int num;
    float numFloat;
    double numDouble;
    
    // Leitura de um número inteiro para as conversões
    printf("Digite um número decimal (inteiro) para converter: ");
    scanf("%d", &num);
    
    // Realizando as conversões de base
    decimalParaBinario(num);
    decimalParaOctal(num);
    decimalParaHexadecimal(num);
    decimalParaBCD(num);
    
    // Leitura de números reais
    printf("\nDigite um número real (float) para conversão: ");
    scanf("%f", &numFloat);
    mostrarBitsFloat(numFloat);
    
    printf("\nDigite um número real (double) para conversão: ");
    scanf("%lf", &numDouble);
    mostrarBitsDouble(numDouble);
    
    return 0;
}
