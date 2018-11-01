#include "Simple_List.h"
#include "Linked_List.h"
#include "Stack.h"
#include "Queue.h"
#include <cstdlib>
#include <iostream>
#include <cassert>

using namespace std;

void test_stack();
void test_queue();
void test_iterator_queue();
void test_iterator_stack();

int main(int argc, char** argv) {

    //test_stack();
    //test_queue();
    //test_iterator_queue();
    test_iterator_stack();
    return 0;

}

void test_stack() {
    
    cout << endl << "=======================" << endl;

    cout << endl << "Testing generic stack:" << endl;

//    Stack<int> s;
//    for (int i = 0; i < 10; i++) {
////        s.push(i);
//    }
//    cout << s << endl;
//    cout << "what is pop: " << s.pop();
//    cout << endl;
//    cout << s << endl;
//    cout << "What is top: " << s.top();
//    cout << endl;
////    popping frenzy to test s.empty()
//    while (!s.empty()) {
//        s.pop();
//        cout << s << endl;
//    }

}

void test_queue() {
    
    cout << endl << "=======================" << endl;

    cout << endl << "Testing generic queue:" << endl;

    Queue<int> q;
    // populate the queue by pushing items in
    for (int i = 0; i < 10; i++) {
        q.push(i);
    }
    // print the queue
    cout << q << endl;
    // pop the first-in item
    q.pop();
    // print queue after pop
    cout << "after pop " << q << endl;
    // get the top item after pop
    cout << "get top " << q.top() << endl;
    //completely pop out the queue
    while (!q.empty()) {
        q.pop();
    }
    cout << "after total pop: " << q << endl;
    ////cout << "get top " << q.top() << endl; //assertion failed test!
}

void test_iterator_queue() {

    cout << endl << "=======================" << endl;

    cout << endl << "Testing a queue with iterator:" << endl;
    Queue<int> q;

    for (int i = 0; i < 10; i++) {
        q.push(i * 10);
    }

    Queue<int>::Iterator it; //a queue Iterator object
    //    it = q.Begin();
    //    cout << *it << endl;

    //prefix works but not post fix
    for (it = q.Begin(); it != q.End(); ++it) {
        //looping through all the elements of List using the Iterator
        cout << *it << " | ";
    }


    //delete it;      //cannot be done.
    //delete it._ptr; //cannot be done.

    cout << endl << "=======================" << endl;
    cout << endl << endl << "Testing a list of strings:" << endl;

    Queue<string> qstr;
    qstr.push("Abel");
    qstr.push("Blake");
    qstr.push("Corrie");
    qstr.push("Donovan");
    qstr.push("Edmund");
    Queue<string>::Iterator it_str;

    for (it_str = qstr.Begin(); it_str != qstr.End(); it_str++) {
        cout << *it_str << " | ";
        *it_str = "X";
        cout << *it_str << " | ";
        //        cin.get();
    }

    cout << endl << "=======================" << endl << endl;
}

void test_iterator_stack() {
    
    cout << endl << "=======================" << endl;

    cout << endl << "Testing a stack with iterator:" << endl;
    Stack<int> s;

    for (int i = 0; i < 10; i++) {
        s.push(i * 10);
    }
    
    Stack<int>::Iterator it;
//    Stack<int>::Iterator it; //a stack Iterator object
    //    it = q.Begin();
    //    cout << *it << endl;

    //prefix works but not post fix
//    for (it = s.Begin(); it != s.End(); ++it) {
//        //looping through all the elements of List using the Iterator
//        cout << *it << " | ";
//    }


}