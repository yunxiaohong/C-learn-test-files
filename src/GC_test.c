#include <stdbool.h>
#include <stdio.h>
#define RANGE 114514
bool prmlt_test(int num);
int main() {
    /* for (int i = 2; i <= RANGE; i++) { */
    /*     if (prmlt_test(i)) { */
    /*         printf("%d ", i); */
    /*     } */
    /* } */
    bool real;
    for (int i = 4; i <= RANGE; i += 2) {
        real = false;
        for (int j = 2; j < i; j++) {
            if (!prmlt_test(j))
                continue;
            if (prmlt_test(i - j)) {
                real = true;
                break;
            }
        }
        if (!real) {
            printf("%s", "哥德巴赫猜想是错的");
            return 0;
        }
    }
    printf("哥德巴赫猜想在4到%d成立", RANGE);
    putchar('\n');
    return 0;
}
bool prmlt_test(int num) {
    for (int i = 2; i < num; i++) {
        // printf("%d is %d\n", num, !(num / i));
        if (!(num % i))
            return false;
    }
    return true;
}
