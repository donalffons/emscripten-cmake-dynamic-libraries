#include "b.h"
#include "a.h"

int multiply_and_add(int a, int b, int c) {
    int product = a * b;
    return add_numbers(product, c);
}