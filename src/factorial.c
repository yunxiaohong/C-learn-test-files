#include "factorial.h"

int factorial(int base) {
    if (base > 1) {
        return base * factorial(base - 1);
    } else {
        return 1;
    }
}
