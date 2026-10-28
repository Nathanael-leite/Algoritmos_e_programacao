
#include <stdio.h>

//função
void converteTempo(int total_segundos, int *horas, int *minutos, int *segundos){


    *horas = total_segundos / 3600; 
    total_segundos = total_segundos % 3600; //descartar os segundos que já foram convertidos em horas,
    *minutos = total_segundos /60;
    *segundos = total_segundos % 60;

}

int main(void){

    //declaração/
    int total_segundos; //variavel para a horas totais
    int hora, min, seg; //variaveis auliares

    printf("Informe um horario em segundos: ");
    scanf("%d", &total_segundos);

    //chamada da função
    converteTempo(total_segundos, &hora, &min, &seg);

    //saida
    printf("|| tempo informado %d em:\n", total_segundos);
    printf("|| %d horas | %d minutos | %d segundos ||\n", hora, min, seg);

    


    return 0;
}