//#include "single_linked_list.h"
#include "stack.h"
#include <iostream>

using namespace std;

/* Main function for the single_linked_list
* make sure the "single_linked_list.h" is not commented out
* and "stacked.h" is commented out
*/

/*int main() {
    SingleLinkedList my_list;

    my_list.push_back(1);
    my_list.push_back(2);
    my_list.push_back(3);
    

    cout << "Front: " << my_list.front() << endl;
    cout << "Back: " << my_list.back() << endl;

    cout << "Popped: " << my_list.pop_front() << endl;
    cout << "Popped: " << my_list.pop_back() << endl;

    cout << "Empty: " << (my_list.empty() ? "true" : "false") << endl;

    my_list.insert(1, 6); // Insert 6 at index 1
    cout << "Inserted: " << my_list.front() << endl;

    my_list.remove(1); // Remove item at index 1
    cout << "Removed: " << my_list.front() << endl;

    size_t found_index = my_list.find(3);
    if (found_index < my_list.empty())
        cout << "Found at index: " << found_index << endl;
    else
        cout << "Not found" << endl;

    return 0;
}*/

/* Main function for the stack
* make sure you uncomment the "stack.h" header
* and comment out the "single_linked_list.h" header
*/

int main() {
    Stack my_stack;

    // Check if the stack is empty
    cout << "Is the stack empty? " << (my_stack.empty() ? "Yes" : "No") << std::endl;

    // Insert some integer values onto the stack
    my_stack.push(10);
    my_stack.push(20);
    my_stack.push(30);
    my_stack.push(40);

    // Remove an element from the stack
    cout << "Popped element: " << my_stack.pop() << endl;

    // Find the top of the stack
    cout << "Top of the stack: " << my_stack.top() << endl;

    // Find the average value of the stack elements
    cout << "Average value of stack elements: " << my_stack.average() << endl;

    return 0;
}