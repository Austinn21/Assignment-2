#include "single_linked_list.h"
#include <iostream>

using namespace std;

// Node class constructor
Node::Node(int data) {
    this->data = data;
    this->next = nullptr;
}

// SingleLinkedList class constructor
SingleLinkedList::SingleLinkedList() {
    head = nullptr;
    tail = nullptr;
    num_items = 0;
}

// SingleLinkedList class destructor
SingleLinkedList::~SingleLinkedList() {
    Node* current = head;
    while (current != nullptr) {
        Node* next = current->next;
        delete current;
        current = next;
    }
}

// Push a new node with data at the front of the list
void SingleLinkedList::push_front(int data) {
    Node* new_node = new Node(data);
    if (empty()) {
        head = new_node;
        tail = new_node;
    }
    else {
        new_node->next = head;
        head = new_node;
    }
    num_items++;
}

// Push a new node with data at the back of the list
void SingleLinkedList::push_back(int data) {
    Node* new_node = new Node(data);
    if (empty()) {
        head = new_node;
        tail = new_node;
    }
    else {
        tail->next = new_node;
        tail = new_node;
    }
    num_items++;
}

// Pop the node at the front of the list and return its data
int SingleLinkedList::pop_front() {
    if (empty()) {
        cout << "Error: List is empty!" << endl;
        return -1; // Or any suitable value to indicate error
    }
    int data = head->data;
    Node* temp = head;
    head = head->next;
    delete temp;
    num_items--;
    if (empty()) {
        tail = nullptr;
    }
    return data;
}

// Pop the node at the back of the list and return its data
int SingleLinkedList::pop_back() {
    if (empty()) {
        cout << "Error: List is empty!" << endl;
        return -1; // Or any suitable value to indicate error
    }
    int data;
    if (head == tail) {
        data = head->data;
        delete head;
        head = nullptr;
        tail = nullptr;
    }
    else {
        Node* current = head;
        while (current->next != tail) {
            current = current->next;
        }
        data = tail->data;
        delete tail;
        tail = current;
        tail->next = nullptr;
    }
    num_items--;
    return data;
}

// Return the data of the node at the front of the list
int SingleLinkedList::front() {
    if (empty()) {
        cout << "Error: List is empty!" << endl;
        return -1; // Or any suitable value to indicate error
    }
    return head->data;
}

// Return the data of the node at the back of the list
int SingleLinkedList::back() {
    if (empty()) {
        cout << "Error: List is empty!" << endl;
        return -1; // Or any suitable value to indicate error
    }
    return tail->data;
}

// Check if the list is empty
bool SingleLinkedList::empty() {
    return head == nullptr;
}

// Insert a new node with data at the specified index
void SingleLinkedList::insert(size_t index, int data) {
    if (index <= 0) {
        push_front(data);
    }
    else if (index >= num_items) {
        push_back(data);
    }
    else {
        Node* new_node = new Node(data);
        Node* current = head;
        for (size_t i = 0; i < index - 1; ++i) {
            current = current->next;
        }
        new_node->next = current->next;
        current->next = new_node;
        num_items++;
    }
}

// Remove the node at the specified index
bool SingleLinkedList::remove(size_t index) {
    if (index >= num_items)
        return false;
    if (index == 0) {
        pop_front();
    }
    else {
        Node* current = head;
        for (size_t i = 0; i < index - 1; ++i) {
            current = current->next;
        }
        Node* temp = current->next;
        current->next = temp->next;
        if (temp == tail) {
            tail = current;
        }
        delete temp;
        num_items--;
    }
    return true;
}

// Find the index of the first occurrence of data in the list
size_t SingleLinkedList::find(int data) {
    Node* current = head;
    size_t index = 0;
    while (current != nullptr) {
        if (current->data == data)
            return index;
        current = current->next;
        index++;
    }
    return num_items;
}

