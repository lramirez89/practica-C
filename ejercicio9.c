#include <stdio.h>
#include <stdint.h>

int main(){
    // 010 00 010 = 66 en sin signo
    uint8_t n = 66;

    //
    //uint8_t mascara = 0b0000 0111;
    uint8_t mascara = 0x07;

    uint8_t parteBaja = n & mascara;

    // mascara2 = 0001 1111
    uint8_t mascara2 = 0x1f;

    uint8_t parteAlta = mascara2 & n;

    printf("%d \n",parteBaja);
    printf("%d \n",parteAlta);

    return 0;
}
