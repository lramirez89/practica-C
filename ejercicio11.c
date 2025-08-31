/***************************************************************************************
Realizar un programa que rote un arreglo de números enteros a la izquierda. El arreglo
puede estar hardcodeado. Por ejemplo, si el arreglo es [1, 2, 3, 4], el resultado debe
ser [2, 3, 4, 1]. Cuando veamos punteros, podremos hacer una función de rotación
genérica.
****************************************************************************************/

#include <stdio.h>

int main(){
    int arNum[] = {1,2,3,4};

    for(int i=0; i<4 ;i++)
        printf("%d ", arNum[i]);
    
    printf("\n \n");

    //modificar el arreglo

    int arNumCopy[4];
    for(int i=0; i<4 ;i++)
        arNumCopy[i]= arNum[(i+1)%4];

    for(int i=0; i<4 ;i++)
        arNum[i]= arNumCopy[i];

    for(int i=0; i<4 ;i++)
        printf("%d ", arNum[i]);
    
    printf("\n \n");

    return 0;
}
