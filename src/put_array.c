#include "put_array.h"
#include <stdio.h>

void put_array(int *array, int len) {
    for (int i = 0; i < len; i++) {
        printf("%d ", array[i]);
    }
    putchar('\n');
}

void put_array_2d(int cols, int rows, int array[cols][rows]) {
    for (int j = 0; j < cols; j++) {
        for (int i = 0; i < rows; i++) {
            printf("%d ", array[j][i]);
        }
        putchar('\n');
    }
    putchar('\n');
}
