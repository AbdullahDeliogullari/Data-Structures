#include <iostream>
#include "Stack.h"

using namespace std;

int main()
{
    // NULL
    Stack<int> stackInt = Stack<int>();

    // Store several numbers to the stack
    stackInt.push(32);
    stackInt.push(47);
    stackInt.push(18);
    stackInt.push(59);
    stackInt.push(88);
    stackInt.push(91);

    // List the element of stack
    while(!stackInt.isEmpty())
    {
        // Get the top element
        cout << stackInt.peek() << " - ";

        // Remove the top element
        stackInt.pop();
    }
    cout << "END" << endl;

    return 0;
}
