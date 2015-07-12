#include <stdio.h>

int next_serial();

int next_serial(){
    // a local variable that keeps its value between function calls
    static int result = 0;
    result += 1;
    return result;
}

int main() {
    printf("%d\n", next_serial());
    printf("%d\n", next_serial());
    return 0;
}

