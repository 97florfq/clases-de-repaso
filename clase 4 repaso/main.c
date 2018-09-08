#include <stdio.h>
#include <stdlib.h>
#define CANTIDAD 10

int main()
{
int i;
int misNumeros[CANTIDAD];
//int indice;
int numeroMayor;
for(i=0; i<CANTIDAD; i++)
{
    __fpurge(stdin);
    printf("Ingrese un numero");
    scanf("%d",&misNumeros[i]);
    printf("ingresado el numero en posicion %d : %d \n",i,misNumeros[CANTIDAD]);
}
for(i=0; i<CANTIDAD; i++)
{
    printf("Numero en posicion %d:%d",i+1,misNumeros[i]);

}
for(i=0; i<CANTIDAD; i++)
{
    if ((i==0)||(misNumeros[i] > numeroMayor))
    {
        numeroMayor = misNumeros[i];
    }


    if(i == CANTIDAD -1)
    {

    }
}
printf("Numero mayor %d",numeroMayor);
/*printf("ingrese un numero del 1 al %d",CANTIDAD);
scanf("%d",&indice);
if(indice = CANTIDAD&&indice >=1)
{
    printf("Numerp %d",misNumeros [indice -1]);
}
printf("\nIngrese la posicion del numero a reemplazar del 1 al %d",CANTIDAD);
scanf("%d",&indice);

*/
    return 0;
}
