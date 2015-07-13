#include <stdio.h>

// since base, exp and result will be all accessed many times,
// the modifier register will request the compiler to save those
// values in CPU registries, instead of save them in the memory space

int power(register int base, register int exp);

int power(register int base, register int exp){
    register int result = 1;

    for (; exp; exp--) {
        result *= base;
    }
    return result;
}

int main() {
    printf("2^10 = %d\n", power(2, 10));
    return 0;
}

