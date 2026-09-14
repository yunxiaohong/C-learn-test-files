#include <stdio.h>
#include <stdlib.h>
int main() {
    int *p = malloc(sizeof(int));
    *p = 114;
    printf("这是一个堆内存%d", *p);
    return 0;
}
