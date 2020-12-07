#include <iostream>
#include "Queue.cpp"
using namespace std;

int main() {
    Node<int> *node = new Node<int>(1);
    cout<<node->getData()<<endl;
    Node<int> *node1 = new Node<int>(2);
    node->setNext(node1);
    cout<<node1->getData()<<endl;
    Queue<int> *queue = new Queue<int>();
    cout<<queue->isEmpty()<<endl;
    queue->push(7);
    return 0;
}
