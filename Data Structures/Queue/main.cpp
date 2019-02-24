#include <iostream>
#include "Queue.h"

using namespace std;

int main()
{
    // NULL
    Queue<int> queueint = Queue<int>();

    // Store several numbers to queue
    queueint.enqueue(1);
    queueint.enqueue(2);
    queueint.enqueue(3);
    queueint.enqueue(4);
    queueint.enqueue(5);

    while(!queueint.isEmpty()){
        cout << queueint.peek() << " - ";
        queueint.dequeue();
    }
    return 0;
}
