
#ifndef QUEUE_H
#define QUEUE_H

#include "Linked_List.h"
#include "Simple_List.h" //???
#include <iostream>
#include <cassert>
using namespace std;

template <typename T>

class Queue {
public:

    //constructor

    Queue() {
        this->front = nullptr;
        this->rear = nullptr;
        this->size = 0;
    }

    //copy constructor

    Queue(const Queue& other) {
        this->front = other.front;
        this->rear = other.rear;
        this->size = other.size;
    }

    //destructor

    ~Queue() {
        // IS THIS RIGHT?
        delete[] front;
        delete[] rear;
    }

    //assignment operator

    Queue<T>& operator=(const Queue<T>& rhs) {
        //self-check
        if (*this == rhs) {
            return *this;
        }
        //clean up
        delete[] this->front;
        delete[] this->rear;

        //re-instantiate lhs attributes
        this->front = rhs.front;
        this->rear = rhs.rear;
        this->size = rhs.size;

        //copy junk over

        return *this;
    }

    // pushes item to the rear
    void push(const T& item) {

        // declare a walker to traverse down the queue
        node<T>* walker = front;
        
        // if the queue is empty, create a new node of capacity 1
        if (this->front == nullptr) {
            insert_head(front, item);
            front->_next = rear;
        } 
        // if queue is not empty, traverse down the queue
        else {
            while (walker != rear) {
                // if walker's next is rear, insert item after walker. Else, keep walking
                if (walker->_next == rear) {
                    insert_after(front, walker, item);
                    walker->_next = rear;
                } else {
                    walker = walker->_next;
                }
            }
        }
        //queue size enlarges by 1
        size++;
    }

    //pop items from the front
    T pop() {
        // cannot pop an empty queue
        assert(front != nullptr);
        
        //decrement the queue size
        size--;
        // return the item front of the queue
        return delete_head(front);
        
//        return front
//        return stack.Delete(stack.Begin());
        
    }
    T top() {
        // cannot check top of an empty queue
        assert(front != nullptr);
        
        return front->_item;
    }
    bool empty();
    template <class U>
    friend ostream& operator<<(ostream& outs, const Queue<U>& q);


private:
    node<T>* front;
    node<T>* rear;
    int size;
};


#endif /* QUEUE_H */

