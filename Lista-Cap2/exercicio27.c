#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int main() {
    srand(time(NULL)); 

  
    int dado1 = (rand() % 6) + 1;
    int dado2 = (rand() % 6) + 1;
    int dado3 = (rand() % 6) + 1;

    printf("Lancamento dos 3 dados: %d, %d, %d\n", dado1, dado2, dado3);

    system("PAUSE");
    return 0;
}