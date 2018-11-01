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

    class Iterator {
    public:
        friend class Stack;

        // Are my CTOR correct?
        Iterator();

        Iterator(Simple_List<T> it) {
            p = it;
        }

        Iterator& operator*() {
            return p.operator*();
        }

        //member access operator

        Iterator* operator->() {
            return p.operator->();
        }

        bool is_null() {
            return p.is_null();
        }

        //NOT YET IMPLEMENTED -- HOW do you implement friend fxn?
        friend bool operator!=(const Iterator& left, const Iterator& right);
        friend bool operator==(const Iterator& left, const Iterator& right);
        friend Iterator operator++(Iterator& it, int unused);
        
        Iterator& operator++() {
            return p.operator++();
        }


    private:
        // without typename, program does not compile
        typename Simple_List<T>::Iterator p;
    };

    Stack() {
        size = 0;
    }

    void push(const T& item) {
        size++;
        stack.insert_head(item);
    }

    T pop() {
        assert(stack.Begin() != nullptr);
        size--;
        return stack.Delete(stack.Begin());
    }

    T top() {
        assert(stack.Begin() != nullptr);
        return stack.Begin()->_item;
    }

    bool empty() {
        return size == 0;
    }

    //WOW I DIDN'T THINK THIS WOULD WORK

    template <class U>
    friend ostream& operator<<(ostream& outs, const Stack<U>& s) {
        node<U>* walker = s.stack.Begin();
        while (walker != s.stack.End()) {
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

