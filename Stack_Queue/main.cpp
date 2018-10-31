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

    //    test_stack();
    test_queue();
    return 0;
}

void test_stack() {

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
    //popping frenzy to test s.empty()
    while (!s.empty()) {
        s.pop();
        cout << s << endl;
    }

}

void test_queue() {

    Queue<int> q;
    
    for (int i = 0; i < 10; i++) {
        q.push(i);
    }
    
    cout << q << endl;
    q.pop();
    cout << "after pop " << q << endl;
    cout << "get top " << q.top() << endl;
//    
    while (!q.empty()) {
        q.pop();
    }
    cout << "after total pop: " << q << endl;
//    cout << "get top " << q.top() << endl; //assertion failed test!
}
