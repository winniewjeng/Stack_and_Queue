#include "Simple_List.h"
#include "Linked_List.h"
#include "Stack.h"
#include <cstdlib>
#include <iostream>
#include <cassert>
using namespace std;
using namespace std;

int main(int argc, char** argv) {

    Stack<int> s;
    s.push(5);
    s.push(10);

    cout << endl;
    cout << s << endl;
    cout << "\nwhat is pop: " << s.pop();
    //    s.pop();
    cout << endl;
    cout << "What is top: " << s.top();
    //    s.pop();

    return 0;
}

