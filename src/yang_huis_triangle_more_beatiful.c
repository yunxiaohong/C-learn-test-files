#include "factorial.h"
#include <stdio.h>
#define ROW 12
int main() {
    for (int i = 0; i < ROW; i++) {
        for (int k = 0; k < (ROW - i - 1) / 2; k++) {
            printf("%s", "    ");
        }
        if ((ROW - i - 1) % 2)
            printf("%s", "  ");
        for (int j = 0; j < i + 1; j++) {
            printf("%-4d", factorial(i) / factorial(i - j) / factorial(j));
        }
        putchar('\n');
    }
    putchar('\n');
    return 0;
}
