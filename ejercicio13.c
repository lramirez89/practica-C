/****************************************************************************************
 Realizar un programa que tire un dado de 6 caras 60 millones de veces y cuente la cantidad
de veces que salió cada número. Para esto, usar un array de 6 elementos. Luego imprimir
el resultado por pantalla. Para tirar el dado aleatoriamente, usar la función rand() de la
librerı́a stdlib.h. Ver el ejemplo de uso provisto en https://en.cppreference.com/w/
c/numeric/random/rand.
 *****************************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));

    int res[] = {0,0,0,0,0,0};

    for(int i=0 ; i<60000000 ;i++){
        int n = rand();
        res[n%6]++;
    }

    for(int i=0; i<6 ;i++)
        printf("%d ",res[i]);
    printf("\n");

    return 0;
}