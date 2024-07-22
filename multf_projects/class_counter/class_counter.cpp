#include "class_counter.h"
#include <iostream>

Counter::Counter(void): num{1} {}
Counter::Counter(const int& num): num{num} {}
Counter::~Counter(){}

int Counter::inc(void) {
    return num++;
}
int Counter::dec(void) {
    return num--;
}
void Counter::get_count(void) {
    std::cout << num << std::endl;
    return;
}
