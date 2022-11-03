#include<stdio.h>
#include<stdlib.h>

int main(){
    int a;
    char nome[30]; 
    char user[30];
    do{
        printf("\t(1)...Cadrata um novo usuario\n");
        printf("\t(2)...Entrar em um long\n");
        printf("\t(3)...Acessar dados de usuario\n");

        scanf("%d",&a);
    }while((a<1) || (a>3));
    switch(a){
        case 1:
        printf("\n Digite um User:");
        scanf("%s",&nome);
        printf("\n Usuario: %s" ,nome);
        break;

        case 2:
        printf("\n Digite seu User:");
        scanf("%s",&nome);
        

    }}