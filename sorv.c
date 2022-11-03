#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    do{
        printf("\nDifite o numero do sabor\n");
        printf("\t (1)flocos:\n");
        printf("\t (2)morango:\n");
        printf("\t (3)leite condesado:\n");
        scanf("%d", &i);
    }while((i<1) || (i>3));
    switch(i){
        case 1:
        printf("\t\t Vc escolheu flocos");
        break;
        case 2:
        printf("\t\t Vc escolheu morango");
        break;
        case 3:
        printf("\t\t Vc escolheu leite condessado");

    }
}