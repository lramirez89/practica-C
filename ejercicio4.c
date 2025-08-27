#include <stdio.h>
#include <stdint.h>

int main(){
    int8_t i8 = 1;
    uint8_t u8 = 3;
    int16_t i16 = 56;
    uint16_t u16 = 57;
    int32_t i32 = 423;
    uint32_t u32 = 434;
    int64_t i64 = 99;
    uint64_t u64 = 100;

    printf("int8 %d: %lu \n", i8, sizeof(i8));
    printf("uint8 %d: %lu \n", u8, sizeof(u8));
    printf("int16 %d: %lu \n", i16, sizeof(i16));
    printf("uint16 %d: %lu \n", u16, sizeof(u16));
    printf("int32 %d: %lu \n", i32, sizeof(i32));
    printf("uint32 %d: %lu \n", u32, sizeof(u32));
    printf("int64 %ld: %lu \n", i64, sizeof(i64));
    printf("uint64 %ld: %lu \n", u64, sizeof(u64));

    return 0;
}
