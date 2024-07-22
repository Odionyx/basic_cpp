#include "mathc_func.h"

int addition(int x, int y) {
    return (x + y);
}

int subtraction(int x, int y) {
    return (x - y);
}

int multiplication(int x, int y) {
    return (x * y);
}

double division(int x, int y) {
    return (static_cast <double> (x) / y);
}

long int degree(int value, int power) {
    long int result = 1;
    for (int i = 0; i < power; i++) {
        result *= value;
    }
    return result;
}
