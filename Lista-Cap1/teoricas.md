# Respostas Teóricas - Lista Capítulo 1

## Questão 04. 

```c
#include <stdio.h> 
#include <stdlib.h>; // contêm um ponto e vírgula indevido
int Main{} //utiliza letra maiúscula no nome da função principal e inverteu o () após o nome da main pelas {} que delimitam o corpo da fução
(
printf( Existem %d semanas no ano.,52); //A string no printf não possui aspas duplas
cout << endl; //Uso do comando cout << endl
system("PAUSE");
return 0;
) 

//Versão Corrigida:

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Existem %d semanas no ano.", 52);
    system("PAUSE");
    return 0;
}
```

## Questão 05. 

O trecho de código não compila nem executa corretamente no padrão ANSI C. Falta a inclusão de #include <stdio.h> e #include <stdlib.h>. Ausência do tipo de retorno int main() e da instrução de encerramento return 0;. A instrução system("pause"); está fora das chaves {} da função main().  

## Questão 06.

Erros de Sintaxe: Instruções e declarações escritas fora do bloco da função main(). Ausência de vírgulas separadoras e do ponto e vírgula final na declaração int a=1 b=2 c=3. Aspas duplas de fechamento ausentes no primeiro comando printf. Ausência das diretivas de inclusão #include <stdio.h> e #include <stdlib.h>.  Erro de Lógica: O comando printf tenta exibir a variável d, porém ela não foi declarada nem inicializada no programa.  

## Questão 07. 

a) Pula uma linha (\n) e aplica uma tabulação (\t): 	

    Bom dial Shirley.  
b) Imprime o texto e avança o cursor para a linha seguinte: 
Você já tomou café?   

c) Pula duas linhas e divide o texto em duas linhas:


A solução não existe!
Não insista.  
d) Insere tabulações entre as palavras:
Duas    linhas  de  saída  
ou	uma?  
e) Exibe cada palavra em uma linha separada:
um
dois
três  

## Questão 08. 
O programa executa uma quebra de linha (\n), aplica uma tabulação horizontal (\t) e imprime as aspas duplas literais através da sequência de escape \"
O print sai assim: 	

    "Primeiro programa"   

## Questão 09. 
Em C, constantes de caracteres delimitadas por aspas simples (como '\n', '\t', '\"') são tratadas internamente como seus valores numéricos da tabela ASCII. O especificador %c no printf converte esses códigos numéricos de volta para seus caracteres correspondentes no terminal.
O print sai assim: 

    "Primeiro programa"  

## Questão 10. 
b) Verdadeiro
Por ser uma linguagem case sensitive, o C considera peso, Peso e PESO como três variáveis  diferentes na memória.

## Questão 11. 
\r: Sequência de escape / Tipo Base: char   
2130: Constante inteira / Tipo Base: int   
-123: Constante inteira / Tipo Base: int   
33.28: Constante de ponto flutuante / Tipo Base: double   
0xFA: Constante inteira hexadecimal / Tipo Base: int   
0101: Constante inteira octal / Tipo Base: int   
2.0e30: Constante de ponto flutuante (notação científica) / Tipo Base: double   
\xDC: Sequência de escape hexadecimal / Tipo Base: char   
'\\': Constante de caractere (barra invertida) / Tipo Base: char   
'F': Constante de caractere / Tipo Base: char   
0: Constante inteira / Tipo Base: int   
'\0': Constante de caractere (nulo) / Tipo Base: char   
"F": Constante string / Tipo Base: char   
-4567.89: Constante de ponto flutuante / Tipo Base: double

## Questão 12. 
a) int a; - Correto. Declaração padrão de variável inteira.   
b) float b; - Correto. Declaração padrão de ponto flutuante.   
c) double float c; - Incorreto. Uso inválido e redundante de dois tipos simultâneos, deve-se usar apenas double ou float.   
d) unsigned char d; - Correto. Modificador sem sinal aplicado validamente ao tipo caractere.   
e) unsigned e; - Correto. Sintaxe equivalente a unsigned int.   
f) long float f; - Incorreto. Combinação de tipos que não funciona no padrão C moderno, o  correto é double.   
g) long g; - Correto. Sintaxe abreviada para long int.   
h) long double h; - Correto. Modificador de precisão estendida aplicado validamente a ponto flutuante. 

## Questão 13. 
c) 

## Questão 14.  
a) 

## Questão 15.  
c)

## Questão 16.  
c)

## Questão 17.  
a), b) e c) estão corretas. A instrução d) é inválida pois chamadas de função precisam de  parênteses. A linguagem C possui formato livre (free-form language), ignorando espaços em branco ou tabulações redundantes entre a função, seus parâmetros e delimitadores.


