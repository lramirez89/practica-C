#include <stdio.h>

int main(){
    float f = 0.1;
    double d = 0.1;

    printf("%f \n", f);
    printf("%f \n", d);

    // casteo
    int fc = (int) f;
    int dc = (int) d;

    printf("%d \n", fc);
    printf("%d \n", dc);

    return 0;
}
