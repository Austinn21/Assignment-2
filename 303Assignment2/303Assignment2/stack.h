#ifndef STACK_H
#define STACK_H

#include <iostream>
#include <vector>
#include <numeric> // For std::accumulate

class Stack {
private:
    std::vector<int> stack;

public:
    Stack();

    bool empty() const;
    void push(int value);
    int pop();
    int top() const;
    double average() const;
};

#endif // STACK_H

