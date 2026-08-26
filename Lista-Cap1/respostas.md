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

O trecho de código não compila nem executa corretamente no padrão ANSI C.  Elementos faltantes: Falta a inclusão de #include <stdio.h> e #include <stdlib.h>. Ausência do tipo de retorno (int main()) e da instrução de encerramento return 0;. A instrução system("pause"); está fora das chaves {} da função main().  

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


## Questão 09. 


## Questão 10. 


## Questão 11. 


## Questão 12. 


## Questão 13. 


## Questão 14.  


## Questão 15.  


## Questão 16.  


## Questão 17.  



