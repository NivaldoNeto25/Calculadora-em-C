### Projeto de Atividade da Faculdade

Este projeto faz parte de uma atividade acadêmica, desenvolvida com o objetivo de implementar uma calculadora programador didática utilizando a linguagem C. A calculadora realiza conversões numéricas entre diferentes bases e manipula números reais, facilitando a compreensão de como os computadores lidam com diferentes sistemas de numeração e com a representação de números reais em formatos como float e double. Abaixo, segue a explicação detalhada de cada uma das funcionalidades.

---

### Explicação da Calculadora Programador Didática

Esta calculadora foi desenvolvida para realizar conversões numéricas entre diferentes bases e trabalhar com números reais na linguagem de programação C. A seguir, cada uma das funcionalidades será explicada em tópicos.

---

#### 1. Conversões de Base

A calculadora realiza conversões de um número decimal (base 10) para outras bases, incluindo binário (base 2), octal (base 8), hexadecimal (base 16) e também para o formato BCD (Binary Coded Decimal). 

Cada conversão é feita através de um processo específico, e o usuário insere um número decimal como entrada. A calculadora exibe o resultado em cada uma das bases mencionadas.

##### a) Base 2 (Binário)
- O binário é um sistema de numeração que utiliza apenas dois dígitos: 0 e 1. 
- A conversão de um número decimal para binário é feita dividindo o número por 2 repetidamente e coletando os restos das divisões até que o número seja reduzido a zero. Esses restos são os dígitos binários, que são exibidos de trás para frente (do último resto ao primeiro).

##### b) Base 8 (Octal)
- O sistema octal utiliza os dígitos de 0 a 7. 
- A conversão de decimal para octal segue o mesmo processo do binário, porém o número é dividido por 8, e os restos das divisões representam os dígitos octais.

##### c) Base 16 (Hexadecimal)
- O hexadecimal usa os dígitos de 0 a 9 e as letras de A a F (onde A = 10, B = 11, e assim por diante, até F = 15).
- O processo de conversão de decimal para hexadecimal envolve dividir o número por 16 e coletar os restos, assim como nas outras bases. Os restos são convertidos em seus equivalentes hexadecimais.

##### d) Código BCD (Binary Coded Decimal)
- O BCD é uma representação de números decimais onde cada dígito decimal é representado por seu equivalente em binário.
- Por exemplo, o número decimal 45 seria representado em BCD como 0100 0101 (4 = 0100, 5 = 0101).
- A conversão envolve pegar cada dígito decimal separadamente e converter para binário.

---

#### 2. Conversão de Números Reais (Float e Double)

A calculadora também trabalha com números reais, realizando a conversão de números decimais para seus equivalentes em **float** e **double**. Ao fazer isso, são exibidos os detalhes dos bits de sinal, do expoente (com viés) e da fração, de acordo com o padrão IEEE 754.

##### a) Float (32 bits)
- **Sinal**: Um bit que indica se o número é positivo (0) ou negativo (1).
- **Expoente**: Um campo de 8 bits que armazena o valor do expoente com um viés de 127. Isso significa que, ao armazenar o expoente, o valor real é somado a 127.
- **Fração**: Representa a parte fracionária da mantissa do número real (os bits após o ponto decimal no valor binário).

##### b) Double (64 bits)
- **Sinal**: Um bit que indica o sinal do número.
- **Expoente**: Um campo de 11 bits com um viés de 1023.
- **Fração**: A parte fracionária do número é armazenada em 52 bits, o que garante maior precisão do que o tipo float.

A conversão de números reais é feita utilizando a representação binária interna de números reais, e o programa exibe as partes específicas de acordo com o formato float ou double.

---

### Conclusão

Esta calculadora permite a visualização didática de várias operações, incluindo conversões entre bases numéricas e a análise da estrutura interna de números reais em formato float e double. Ela é útil para fins educacionais, pois mostra os passos intermediários em cada conversão, facilitando o entendimento de como cada sistema de numeração funciona.
