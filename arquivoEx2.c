
#include <stdio.h>

int main(void){

    //declaração
    float saldo = 500.00;
    int *p = (int *)&saldo;

    printf("saldo = %2.f\n", *p);

    /*resposta
    o valor impresso não é 500;
    O armazenamento do floa ocorre com ponto
    flutuante na arquiquetura conforme padrão EEE 754
    inteiro usa complemento de 2*/

    return 0;
}