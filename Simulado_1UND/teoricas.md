# Respostas Teóricas - Simulado


## Questão 01.

C)

## Questão 02.
O ; no final do #include <stdlib.h>; (diretivas não usam ponto e vírgula). A função Main() com 'M' maiúsculo (o correto é main()). Falta de aspas duplas ao redor do texto no printf. A linha cout << endl;, que é sintaxe de C++, não de C.

## Questão 03.

a = 2, b = 4, c = 5, d = 10;

a += b + c;
Valor final de a = 11

b *= c = d - 2;
Valores finais: b = 32, c = 8

d %= a + 3;
Valor final de d = 10

a += b += c += 5;
Valores finais: a = 56, b = 45, c = 13


## Questão 04.
a) 1
b) 1
c) 1
d) 1
e) 1

## Questão 05.
a) O while testa a condição antes de entrar no bloco (pode rodar 0 vezes). O do-while testa no final, garantindo que o bloco rode pelo menos 1 vez.
b) O for é melhor quando já sabemos o número exato de iterações, pois junta inicialização, teste e incremento em uma linha só.
c) É um erro de lógica. O ponto e vírgula no final faz o laço ter um corpo vazio. Se a condição for verdadeira, o programa fica preso em um loop infinito sem alterar a variável.

## Questão 06.

a) Dá erro porque a variável soma foi declarada dentro de um bloco interno e não existe fora dele no printf (erro de escopo). Além disso, há um ; depois do for e comandos break/continue soltos fora de um laço.

b) O ; faz o for rodar sozinho 10 vezes até $i = 11. Os comandos de desvio fora de um laço travam a compilação.

c)
```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int soma = 0;

    for (i = 1; i <= 10; i++) {
        if (i == 5) continue;
        if (i == 8) break;

        soma += i * i;
    }

    printf("Soma final = %d\n", soma);
    system("PAUSE");
    return 0;
}
```
Resultado: Soma final = 115