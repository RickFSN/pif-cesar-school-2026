# Respostas Teóricas - Lista Capítulo 3

## Questão 01.
a) A diferença central é o momento em que a condição lógica é avaliada. O while testa a condição no início (antes de entrar no bloco), podendo executar zero vezes se a condição inicial for logo falsa. O do-while executa o bloco de código primeiro e testa a condição no final, garantindo que as instruções internas rodem, no mínimo, uma vez.  

b) O laço for é a escolha mais elegante para iterações com um número previsível ou conhecido de repetições, agrupando inicialização, teste e incremento numa só linha. O while é preferível para repetições indefinidas onde o bloco só deve rodar se uma condição prévia for verdadeira. O do-while é ideal para fluxos que exigem execução prévia obrigatória, como a apresentação de menus interativos ou a validação de entrada de dados do utilizador.   

c) O trecho while (condicao); não é um erro de compilação, pois sintaticamente o C aceita o ponto-e-vírgula como uma instrução vazia (corpo nulo). Contudo, trata-se de um grave erro de lógica na maioria dos casos: se a variável condicao for verdadeira, o programa ficará preso num laço infinito e silencioso, porque não existe código dentro do corpo do laço capaz de alterar o estado da condição para falso.

## Questão 02.
a) O compilador emitirá um erro de sintaxe porque a variável soma não existe fora do laço for. Ela foi declarada dentro do par de chaves do laço, limitando a sua existência estritamente àquele bloco.   

b) Se o printf e o cálculo ficassem juntos, o valor estaria conceitualmente incorreto pois a instrução int soma = 0; ocorreria em todas as iterações. O acumulador seria sempre redefinido para zero, resultando apenas no quadrado da iteração atual, sem armazenar as somas anteriores.   

c) O código corrigido requer declarar soma no escopo da função main antes do laço: 

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int soma = 0; // Variável movida para fora do bloco for
    for (i = 1; i < 10; i++) {
        soma += i * i;
    }
    printf("Soma final = %d\n", soma);
    system("PAUSE");
    return 0;
}
```
O "escopo de bloco" determina a visibilidade da variável (quem pode lê-la), que em C é restrita ao par de chaves {} onde foi declarada. O tempo de vida dita que variáveis locais nascem na memória ao entrar nesse bloco e são sumariamente destruídas pelo sistema ao sair dele.
## Questão 03.
a) O Trecho A executará sucessivas divisões inteiras (a /= 2) e imprimirá os seguintes valores no console: 36 18 9 4 2 1 .   

b) O Trecho B é um laço válido com inicialização e incremento omitidos (deixados em branco). A expressão ch+1 soma 1 ao valor inteiro numérico associado ao caractere na tabela ASCII, imprimindo o próximo caractere do alfabeto. Os parênteses na condição (ch = getch()) são estritamente necessários devido à precedência de operadores em C: eles garantem que a função capture o caractere e o guarde na variável ch antes que o compilador verifique a desigualdade != 'X'.   

c) Um laço infinito puramente omitido como o Trecho C pode ser interrompido programaticamente através da instrução de desvio break; dentro de uma estrutura condicional (if), ou usando a função exit(0); (da biblioteca <stdlib.h>) para matar totalmente o processo.

## Questão 04.
a) O comando break aborta o laço de repetição imediatamente. O fluxo de execução do programa salta para a primeira linha de código existente logo após o fechamento da chave final do laço interrompido.   

b) O comando continue força o laço a ignorar o restante das instruções daquela iteração e salta diretamente para o início do próximo ciclo. Num laço for, a expressão executada imediatamente a seguir é a de incremento (terceiro bloco do cabeçalho), passando depois para o teste lógico.   

c) Numa estrutura aninhada, a instrução break interrompe unicamente o laço imediato onde está fisicamente inserida (neste caso, o laço interno), permitindo que o laço externo retome a sua execução normal na próxima volta.  

## Questão 05.
a) O laço executará exatamente 5 iterações.  

b) Saída: 
i = 0, j = 10 | soma = 10
i = 1, j = 9 | soma = 10
i = 2, j = 8 | soma = 10
i = 3, j = 7 | soma = 10
i = 4, j = 6 | soma = 10

c)
```c

int i = 0, j = 10;
while (i < j) {
    printf("i = %d, j = %d | soma = %d\n", i, j, i + j);
    i++;
    j--;
}

```
## Questão 06.
a) O valor final de x impresso no ecrã será 6.   

b) O operador pós-fixado (x++) compara o valor intocado de x com o número 5, avalia o resultado do teste lógico e só aplica a soma + 1 à variável original instantes depois. Quando x atinge 5, o teste 5 < 5 devolve Falso (encerrando a continuidade do while), mas o processador ainda precisa resolver o operador unário pendente na linha, efetuando o incremento para 6.   

c)
```c

int x = 0;
while (x < 5) {
    x++;
}
x++; 
printf("Valor final de x = %d\n", x);

```