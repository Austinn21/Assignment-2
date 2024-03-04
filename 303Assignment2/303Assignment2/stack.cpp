#include "stack.h"

using namespace std;

Stack::Stack() {}

bool Stack::empty() const {
    return stack.empty();
}

void Stack::push(int value) {
    stack.push_back(value);
}

int Stack::pop() {
    if (empty()) {
        cout << "Stack underflow!" << endl;
        return -1; // Indicating stack underflow
    }
    int top = stack.back();
    stack.pop_back();
    return top;
}

int Stack::top() const {
    if (empty()) {
        cout << "Stack is empty!" << endl;
        return -1; // Indicating stack is empty
    }
    return stack.back();
}

double Stack::average() const {
    if (empty()) {
        cout << "Stack is empty!" << endl;
        return 0; // Indicating stack is empty
    }
    double sum = accumulate(stack.begin(), stack.end(), 0);
    return sum / stack.size();
}
