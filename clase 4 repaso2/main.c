#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
void insertionSort(int array[],int size);
int main()
{
    int i;
    int array [SIZE] = {10,156,84,46,21,2,67,48,48,123};
     for(i=0;i<SIZE; i++)
    {
        printf("%d\n",array[i]);
    }
    insertionSort(array, SIZE);
    for(i=0;i<SIZE; i++)
    {
        printf("%d\n",array[i]);
    }

}
 int swapEnteros (int* pArray,int indiceA, int indiceB)
 {
    int retorno = -1;
    int auxiliar;
    if(pArray !=NULL &&
     indiceA>=0 &&
     indiceB >=0 &&
     indiceA!=indiceB)
    {
        auxiliar = pArray[indiceA];
        pArray[indiceA]=pArray[indiceB];
        pArray[indiceB ]=auxiliar;
        retorno =0;
    }
    return retorno;
 }

void insertionSort(int array[],int size)
{
    int i,j;
    int auxiliar;
    for(i=1;i<size;i++)
    {
        auxiliar = array[i];
        j=i;
        while(j>0&& auxiliar < array[j-1])
        {
            array[j] = array [j -1];
            j--;
        }
        array[j] = auxiliar;
    }

}
