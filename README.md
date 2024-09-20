### Projeto da Faculdade: Calculadora Programador Didática

Este projeto foi desenvolvido como parte de uma atividade acadêmica voltada para a compreensão e implementação de conversões numéricas em diferentes bases e representações binárias, utilizando a linguagem C. A calculadora programador didática tem como principal objetivo auxiliar no aprendizado de conceitos fundamentais de sistemas numéricos e representações de ponto flutuante, sendo implementada de forma didática para que os passos de cada conversão sejam exibidos ao usuário.

### Funcionamento da Calculadora

A calculadora possui várias funcionalidades organizadas em um menu interativo, onde o usuário pode selecionar o tipo de conversão que deseja realizar. A seguir, os tópicos principais explicam cada uma das funcionalidades da calculadora:

---

#### 1. Conversão de Base 10 para Outras Bases

Nesta opção, o usuário pode converter um número decimal (base 10) para três outras bases: binário (base 2), octal (base 8) e hexadecimal (base 16). Além disso, há a conversão para BCD (Binary Coded Decimal).

- **Binário**: O número decimal é convertido para uma sequência de bits. A calculadora exibe o número em 32 bits para garantir a visualização completa do valor.
  
- **Octal**: A conversão para octal exibe o número decimal em sua representação na base 8.
  
- **Hexadecimal**: O número é convertido para base 16, onde os valores são representados por dígitos de 0 a 9 e letras de A a F.
  
- **BCD (Binary Coded Decimal)**: Cada dígito do número decimal é convertido individualmente para sua representação binária de 4 bits.

---

#### 2. Conversão de Números Reais para Float

A calculadora também permite converter um número real em formato `float` e exibir sua representação segundo o padrão IEEE 754. São mostrados os seguintes componentes:

- **Sinal**: Indica se o número é positivo ou negativo.
- **Expoente**: Valor do expoente com viés de 127, que é usado para ajustar a escala do número.
- **Fração**: A parte fracionária do número após a normalização.

---

#### 3. Conversão de Números Reais para Double

Similar à conversão de `float`, esta funcionalidade permite converter números reais para o formato `double`, exibindo também o sinal, o expoente (com viés de 1023) e a fração. Como o formato `double` utiliza 64 bits, ele permite maior precisão que o `float`.

---

#### 4. Conversão de Base 10 para Complemento a 2 (16 bits)

Esta funcionalidade permite converter números decimais, tanto positivos quanto negativos, para sua representação em complemento a 2 utilizando 16 bits. Este é um método amplamente utilizado para a representação de números com sinal em sistemas binários.

- **Números Positivos**: São simplesmente convertidos para binário, preenchendo com zeros à esquerda até completar 16 bits.
- **Números Negativos**: O complemento a 2 é aplicado, onde o número é primeiramente convertido para binário, os bits são invertidos, e somamos 1 ao resultado.

---

#### 5. Encerramento da Calculadora

Ao selecionar esta opção, a calculadora exibe uma mensagem de saída e encerra o programa.

---
