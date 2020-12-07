#include <iostream>
#include "Queue.cpp"
using namespace std;

int main() {
    Node<string> *node = new Node<string>("A");
    cout<<node->getData()<<endl;
    Node<string> *node1 = new Node<string>("B");
    node->setNext(node1);
    cout<<node1->getData()<<endl;
    if (node1->getNext() == nullptr) {
        cout<<"ok"<<endl;
    } else {
        cout<<"err"<<endl;
    }
    cout<<"---------------"<<endl;
    Queue<string> *queue = new Queue<string>();
    cout<<queue->isEmpty()<<endl;
    queue->push("A");
    queue->push("B");
    queue->push("C");
    cout<<queue->isEmpty()<<endl;
    cout<<queue->show()<<endl;
    cout<<queue->poll()<<endl;
    cout<<queue->peek()<<endl;
    cout<<queue->poll()<<endl;
    cout<<queue->show()<<endl;

    return 0;
}
