# Respostas Teóricas - Lista Capítulo 2

## Questão 01.
a) O valor numérico que será efetivamente exibido no console é 2.

b) Isso ocorre porque um valor de ponto flutuante está sendo atribuído a uma variável declarada como inteira, forçando o compilador a descartar completamente a parte fracionária. O fenômeno é chamado coerção implícita ou truncamento de tipo.

c) Para evitar ou controlar esse comportamento, o programador deve declarar a variável com o tipo correto. Se o objetivo for realmente armazenar um inteiro com arredondamento correto, deve-se utilizar a coerção explícita combinada com funções da biblioteca <math.h>, como round(), antes da atribuição.

## Questão 02.
a) Seu uso deve ser evitado porque não fazem parte do padrão ANSI C. São bibliotecas legadas do ambiente DOS/Windows, o que compromete a portabilidade do código para sistemas operacionais modernos como Linux, macOS e servidores.   

b) As funções equivalentes incluem getchar(), fgetc(), putchar() e o scanf() com o modificador %c.   

c) 
```c
#include <stdio.h>

int main() {
    char c;

    printf("Digite um caractere: ");
    scanf(" %c", &c);

    printf("Caractere lido: %c\n", c);
    return 0;
}
```
## Questão 03.
```c
#include <stdio.h>

int main() {
    int valor;

    printf("Digite um numero inteiro: ");
    scanf("%d", &valor);

    printf("Decimal: %d | Hexadecimal: %x | Octal: %o | ASCII: %c\n", valor, valor, valor, valor);

    return 0;
}
```
## Questão 04.
## Questão 04. Operadores de Atribuição Composta e Precedência
int a=1, b=2, c=3, d=4 Em C, quando há múltiplas atribuições na mesma instrução, a avaliação ocorre da direita para a esquerda.

a += b + c; 
  -> a = 1 + (2 + 3) -> Valor final de a = 6.

b *= c = d + 2; 
  -> c = 4 + 2 = 6. Depois, b = 2 * 6 = 12. -> Valores finais de b = 12 e c = 6.

d %= a + a + a;
  -> d = 4 % (6 + 6 + 6) -> d = 4 % 18 = 4. -> Valor final de d = 4.

d -= c -= b -= a; 
  -> b = 12 - 6 = 6
  -> c = 6 - 6 = 0
  -> d = 4 - 0 = 4. 
  -> Valores finais de d = 4, c = 0 e b = 6.

a += b += c += 7;
  -> c = 0 + 7 = 7
  -> b = 6 + 7 = 13 
  -> a = 6 + 13 = 19. 
  -> Valores finais de a = 19, b = 13 e c = 7.

## Questão 05.
i=1, j=2, k=3, n=2, x=3.3, y=4.4:

a) i < j + 3 -> 1 < 2 + 3 -> 1 < 5 -> Resultado: 1
b) 2 * i - 7 <= j - 8 -> 2 - 7 <= 2 - 8 -> -5 <= -6 -> Resultado: 0
c) -x + y >= 2.0 * y -> -3.3 + 4.4 >= 8.8 -> 1.1 >= 8.8 -> Resultado: 0
d) x == y -> 3.3 == 4.4 -> Resultado: 0
e) !(n - j) -> !(2 - 2) -> !0 -> Resultado: 1
f) !n - j -> (!2) - 2 -> 0 - 2 -> Resultado: -2 (Verdadeiro no fluxo lógico)
g) i && j && k -> 1 && 2 && 3 -> Resultado: 1
h) i || j - 3 && k -> 1 || (2 - 3) && 3 -> 1 || (-1 && 3) -> Resultado: 1 (Curto-circuito)
i) i < j && 2 >= k -> 1 < 2 && 2 >= 3 -> 1 && 0 -> Resultado: 0
j) i == 2 || j == 4 || k == 5 -> 0 || 0 || 0 -> Resultado: 0

## Questão 06.
a) Prefixado (++n): O valor de n é incrementado antes de ser utilizado na expressão.
Pós-fixado (m++): O valor original de m é utilizado na expressão e o incremento é realizado logo em seguida.

Trecho A: n=6 x=6
Trecho B: m=6 y=5

b) Comportamento Indefinido:
Porque a linguagem C não define uma ordem estrita de avaliação para os argumentos passados para uma função. Compiladores diferentes podem avaliar os parâmetros da direita para a esquerda ou da esquerda para a direita. Modificar a mesma variável (n) múltiplas vezes dentro da mesma chamada de função (n, n+1, n++) faz com que o resultado dependa inteiramente da implementação específica do compilador utilizado.