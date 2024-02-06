#include <stdio.h>

int main() {

    for(int i = 0; i <= 127; i++) {
        printf("%c%c%c%c%c\n", i / 10 + '0', i % 10 + '0', i / 10 + '0', i % 10 + '0', i / 10 + '0');    
    }


    return 0;
}