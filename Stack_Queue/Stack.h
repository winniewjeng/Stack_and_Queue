#ifndef STACK_H
#define STACK_H

#include "Simple_List.h"
#include "Linked_List.h"
#include <iostream>
#include <cassert>
using namespace std;

template <typename T>
class Stack {
public:
    Stack() {
        size = 0;
    }

    void push(const T& item) {
        cout << "item is " << item << endl;
        size++;
        stack.insert_head(item);
        stack.Print();
    }

    T pop() {
        size--;
        return stack.Delete(stack.Begin());
    }

    T top() {
        return stack.Begin()->_item;
    }

    bool empty() {
        return size == 0;
    }

    //WOW I DIDN'T THINK THIS WOULD WORK

    template <class U>
    friend ostream& operator<<(ostream& outs, const Stack<U>& l) {
        node<U>* walker = l.stack.Begin();
        while (walker != l.stack.End()) {
            outs << " [" << walker->_item << "]";
            walker = walker->_next;
        }

        return outs;

    }

private:
    int size;
    Simple_List<T> stack;

};

#endif /* STACK_H */

