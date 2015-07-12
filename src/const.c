#include <stdio.h>

// immutable globals
const char SPACE = ' ';
const char DASH = '-';

// immutable parameter
void space_to_dash(const char *str);

void space_to_dash(const char *str){
    while(*str){
        if(*str == SPACE){
            printf("%c", DASH);
        } else {
            printf("%c", *str);
        }
        str++;
    }
    printf("\n");
}

int main() {
    space_to_dash("may the force be with you");
    return 0;
}

