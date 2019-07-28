#ifndef CALCULATOR
#define CALCULATOR
#include <list>
#include <cmath>

class Calculator{
public:
    std::list<double> stack;
    void insert(double value);
    void add(void);
    void sub(void);
    void mul(void);
    void div(void);
    void sqrt(void);
    void pow(void);
    double getResult(void);
    double getPopResult(void);
};

#endif
