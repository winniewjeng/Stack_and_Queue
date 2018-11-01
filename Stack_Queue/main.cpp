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

int main(int argc, char** argv) {

    //    test_stack();
//        test_queue();
//    test_iterator_queue();
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
    
    cout <<endl<<endl<< "=======================" << endl<<endl;
    
    cout<<endl<<endl<<"Testing a queue with iterator:"<<endl;
    Queue<int> q;
    
    for (int i = 0; i < 10; i++) {
        q.push(i);
    }
    
    Queue<int>::Iterator it; //a queue Iterator object
//    it = q.Begin();
//    cout<<*it<<endl;
//    for (it=q.Begin(); it!=q.End(); it++){                         //postfix ++
//        //looping through all the elements of List using the Iterator
////        cout<<*it<<"|";
//    }
    //delete it;      //cannot be done.
    //delete it._ptr; //cannot be done.
//    cout<<endl<<endl<<"Testing a list of strings:"<<endl;
//    //
//    string s[] = {string("Curly"), string("Moe"), string("Larry")};
//    Queue<string> slist(s, 3);
//    Queue<string>::Iterator sit;           //a List Itertor object
//    for (sit=slist.Begin(); 
//         sit!=slist.End(); 
//         ++sit){                          //prefix ++
//        //looping through all the elements of List using the Iterator
//        cout<<*sit<<"|";
//    }

    cout<<endl;
    cout <<endl<<endl<< "=======================" << endl<<endl;
}