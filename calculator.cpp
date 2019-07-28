#include "calculator.h"

void Calculator::insert(double value) {
    this->stack.push_front(value);
}

void Calculator::add() {
    double dOppB = this->getPopResult();
    double dOppA = this->getPopResult();
    this->stack.pop_front();
    this->stack.push_front(dOppA + dOppB);
}

void Calculator::sub() {
    double dOppB = this->getPopResult();
    double dOppA = this->getPopResult();
    this->stack.push_front(dOppA + dOppB);
}

void Calculator::mul() {
    double dOppB = this->getPopResult();
    double dOppA = this->getPopResult();
    this->stack.push_front(dOppA * dOppB);
}

void Calculator::div() {
    double dOppB = this->getPopResult();
    double dOppA = this->getPopResult();
    this->stack.push_front(dOppA / dOppB);
}

double Calculator::getPopResult() {
    double dResult = this->stack.front();
    this->stack.pop_front();
    return dResult;
}

double Calculator::getResult() {
    return this->stack.front();
}

void Calculator::sqrt() {
    this->stack.front() = std::sqrt(this->stack.front());
}

void Calculator::pow() {
    double dOppB = this->getPopResult();
    double dOppA = this->getPopResult();
    this->stack.push_front(std::pow(dObpA, dOppB);
}
