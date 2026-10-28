/*O Sistema de Energia (HP) Num jogo simples, a energia da personagem é representada por uma variável inteira. O módulo de dano precisa alterar este valor indiretamente.
1.
Crie uma variável int hp = 100;.
2.
Crie um ponteiro int *ptr_hp = &hp;.
3.
Imprima o valor de hp usando a própria variável e usando o ponteiro ptr_hp.
4.
Atribua o valor 75 diretamente à variável hp e mostre o valor apontado por ptr_hp.
5.
Subtraia 20 usando apenas o ponteiro ptr_hp (*ptr_hp = *ptr_hp - 20;) e imprima o novo valor de hp.
Responda em comentário no código: Por que motivo a alteração feita através de *ptr_hp reflete instantaneamente no valor de hp?*/

#include <stdio.h>

int main(void){

    //declaração
    int hp = 100; 
    int *ptr_hr = &hp; //poteiro que aponta para o endereço de hp 

    printf(" Valor de hp = %d \n", hp);
    printf(" Valor de *prt = %d \n", *ptr_hr);

    //atribuição
    hp = 75;

    printf(" Valor de hp = %d \n", hp);
    printf(" Valor de *prt = %d \n", *ptr_hr);

    *ptr_hr = *ptr_hr - 20;
  
    printf(" Valor de hp = %d \n", hp);
    printf(" Valor de *prt = %d \n", *ptr_hr);

    //ambas apotam para a primeira área de memória 


    return 0;
}