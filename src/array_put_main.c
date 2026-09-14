#include "put_array.h"
#include <stdio.h>

int main() {
    printf("%s\n", "这是一维数组");
    int array[] = {1, 2, 3};
    put_array(array, 3);
    int array_2d[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    printf("%s\n", "这是二维数组");
    put_array_2d(3, 3, array_2d);
}
