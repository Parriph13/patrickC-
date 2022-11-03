#include <stdio.h>
#include <stdlib.h>
int main(){
    float nota1; float nota2; float media;
    printf("Insira Nota 1:\n");
    scanf("%f",&nota1);
    printf("Insira Nota 2:\n");
    scanf("%f",&nota2);
    media = (nota1 + nota2) /2;
    printf("Media = %f",media);
}