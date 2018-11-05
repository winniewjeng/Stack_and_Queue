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

int main(int argc, char** argv) {

    test_stack();
    test_queue();
    return 0;

}

void test_stack() {
    
    cout << endl << "=======================" << endl;

    cout << endl << "Testing generic stack:" << endl;

    Stack<int> s;
    for (int i = 0; i < 10; i++) {
        s.push(i);
    }
    cout << s << endl;
    cout << "what is pop: " << s.pop();
    cout << endl;
    cout << s << endl;
    cout << "What is top: " << s.top();
    cout << endl;
    // popping frenzy to test s.empty()
    while (!s.empty()) {
        s.pop();
        cout << s << endl;
    }
    
    //s.pop(); // popping an empty stack -- assertion test failed!

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
        cout << q << endl;
    }
    cout << "after total pop: " << q << endl;
    ////cout << "get top " << q.top() << endl; //assertion test failed!
}
    
    