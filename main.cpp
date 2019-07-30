#include <iostream>
#include "calculator.h"

void add(std::list<double>* stack) {
    if (stack->size() < 2){
        std::cout << "Not Enough Operands" << std::endl;
        return;
    }
    double operandB = stack->front();
    stack->pop_front();
    double operandA = stack->front();
    stack->pop_front();
    stack->push_front(operandA + operandB);
}

void sub(std::list<double>* stack) {
    if (stack->size() < 2){
        std::cout << "Not Enough Operands" << std::endl;
        return;
    }
    double operandB = stack->front();
    stack->pop_front();
    double operandA = stack->front();
    stack->pop_front();
    stack->push_front(operandA - operandB);
}

void mul(std::list<double>* stack) {
    if (stack->size() < 2){
        std::cout << "Not Enough Operands" << std::endl;
        return;
    }
    double operandB = stack->front();
    stack->pop_front();
    double operandA = stack->front();
    stack->pop_front();
    stack->push_front(operandA * operandB);
}

void div(std::list<double>* stack) {
    if (stack->size() < 2){
        std::cout << "Not Enough Operands" << std::endl;
        return;
    } else if (stack->front() == 0) {
        std::cout << "Division by Zero" << std::endl;
        return;
    }
    double operandB = stack->front();
    stack->pop_front();
    double operandA = stack->front();
    stack->pop_front();
    stack->push_front(operandA / operandB);
}

void pow(std::list<double>* stack) {
    if (stack->size() < 2){
        std::cout << "Not Enough Operands" << std::endl;
        return;
    }
    double operandB = stack->front();
    stack->pop_front();
    double operandA = stack->front();
    stack->pop_front();
    stack->push_front(std::pow(operandA, operandB));
}

void sqrt(std::list<double>* stack) {
    double operand = stack->front();
    stack->pop_front();
    stack->push_front(std::sqrt(operand));
}

double getPopResult(std::list<double>* stack) {
    if (stack->size() < 1){
        std::cout << "No value on stack" << std::endl;
        return 0;
    }
    double result = stack->front();
    stack->pop_front();
    return result;
}


int main() {
    std::list<double> stack = std::list<double>();
    for(;;){
        std::string userinput;
        std::cin >> userinput;
        switch (userinput[0]){
            case 'q':
                return 0;
            case '0':
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
                stack.push_front(std::stod(userinput));
                std::cout << "ok." << std::endl;
                break;
            case '+':
                add(&stack);
                std::cout << "ok." << std::endl;
                break;
            case '-':
                sub(&stack);
                std::cout << "ok." << std::endl;
                break;
            case '*':
                mul(&stack);
                std::cout << "ok." << std::endl;
                break;
            case '/':
                div(&stack);
                std::cout << "ok." << std::endl;
                break;
            case '^':
                pow(&stack);
                std::cout << "ok." << std::endl;
                break;
            case 'r':
                sqrt(&stack);
                std::cout << "ok." << std::endl;
                break;
            case '$':
                std::cout << stack.front() << std::endl;
                std::cout << "ok." << std::endl;
                break;
            case 'p':
                std::cout << getPopResult(&stack) << std::endl;
                std::cout << "ok." << std::endl;
                break;
            case 'c':
                stack.empty();
                std::cout << "ok." << std::endl;
                break;
            default:
                std::cout << "Input not recognized." << std::endl;
                std::cout << "ok." << std::endl;
                break;
        }
    }
}
