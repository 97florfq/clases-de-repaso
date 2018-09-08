#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char miString[5];
    strncpy(miString, "pepe",5);
    printf("%s",miString);
   // int comparacion = strncmp("pepo",miString,5);
    printf("Ingrese su nombre :");
    fgets(miString,5,stdin);
    printf("Hola %s!", miString );
    return 0;
}
