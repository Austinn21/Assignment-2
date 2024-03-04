#ifndef SINGLE_LINKED_LIST_H
#define SINGLE_LINKED_LIST_H

#include <cstddef> // For size_t

class Node {
public:
    int data;
    Node* next;

    Node(int data);
};

class SingleLinkedList {
private:
    Node* head;
    Node* tail;
    int num_items;

public:
    SingleLinkedList();
    ~SingleLinkedList();
    void push_front(int data);
    void push_back(int data);
    int pop_front();
    int pop_back();
    int front();
    int back();
    bool empty();
    void insert(size_t index, int data);
    bool remove(size_t index);
    size_t find(int data);
};

#endif /* SINGLE_LINKED_LIST_H */

