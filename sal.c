#include <stdio.h>
#include <stdlib.h>

int main(){
    float sal, inss, ir, sal_lq;

    printf("\n Digite seu salario bruto: ");
    scanf("%f", &sal);

    if(sal <= 1693.72){
        inss = sal * 0.08;
    }
    else
    if(sal >= 1693.73 && sal <= 2822.90){
        inss = sal * 0.09;
    }
    if(sal <= 2822.90){
      
        inss = sal * 0.11;
    }
    else
    if(sal >= 2822.90 && 5646.80){
        inss = sal * 0.11;
        ir = sal * 0.06;

    }
    sal_lq = (sal - inss) - ir;

    printf("\n Desconto Inss: %2.f\n", inss);
    printf("\n Desconto do Imposto de Renda: %2.f\n", ir);
    printf("\n Salario Liquido: %2.f\n", sal_lq);


}