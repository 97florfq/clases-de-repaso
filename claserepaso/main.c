#include <stdio.h>
#include <stdlib.h>

int main()
{
    float edad;
    int i=0;
    float acumulador=0;
    float promedio;
    int respuesta =1;
    do
    {
        printf("Ingrese su edad\n");
        scanf("%f", &edad);
        acumulador = acumulador + edad;
        i++;
        printf("Desea continuar ingresando numeros?");
        scanf("%d",&respuesta);

    }while(respuesta !=0);
    promedio = acumulador/i;
    printf("El promedio es %.2f",promedio);
    return 0;

}

