#include <stdio.h>
#include <stdlib.h>

int main()
{
int li,col;
int mat[2][2];

for(li=0; li<2; li++)
{
    for(col=0; col<2; col++)
    {
        printf("Digite os valores da matriz para: li %d, col %d: ",li + 1,col +1);
        scanf("%d", &mat[li][col]);

    }
}
for(li=0; li <= 2; li++){
    for(col=0; col < 2; col++) printf("%d \t", mat[li][col]);
    printf("Veja sua Matriz");
    printf("\n\n");
}
system("pause");
return 0;


}