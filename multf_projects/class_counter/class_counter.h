#pragma once

class Counter {
public:
    int inc(void);
    int dec(void);
    void get_count(void);

    Counter(void);
    Counter(const int& num);
    ~Counter();
private:
    int num;
};
