
#include <stdio.h>

int main(void){

    //declaração
    float saldo = 500.00;
    int *p = (int *)&saldo;

    printf("saldo = %2.f\n", *p);

    
    return 0;
}