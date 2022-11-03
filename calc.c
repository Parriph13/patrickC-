#include <stdio.h>
#include <stdlib.h>
void mostrarlinha();

void mostrarlinha(){
    printf("\n*********************\n");
}

int main(){
    float salario = 7000;
    float contas = 3000;
    float calc;
    printf("Calculos aprentar:\n");
    mostrarlinha();
    printf("Salario: 7000\n");
    mostrarlinha();
    printf("Total de contas a pagar:3000\n");
    mostrarlinha();
    calc =(salario - contas);
    printf("\n Calculo feito: %f",calc);
    mostrarlinha();
}