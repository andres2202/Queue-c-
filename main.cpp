#include <iostream>
#include "Queue.cpp"
using namespace std;

class ComparatorQueue : public Comparator<int>{
    int compare(int o1, int o2) override;
};

int ComparatorQueue::compare(int o1, int o2) {
    return o1-o2;
}

int main() {
    Node<int> *node = new Node<int>(1);
    cout<<node->getData()<<endl;
    Node<int> *node1 = new Node<int>(2);
    node->setNext(node1);
    cout<<node1->getData()<<endl;
    if (node1->getNext() == nullptr) {
        cout<<"ok"<<endl;
    } else {
        cout<<"err"<<endl;
    }
    cout<<"---------------"<<endl;
    Queue<int> *queue = new Queue<int>(new ComparatorQueue());
    cout<<queue->isEmpty()<<endl;
    queue->push(7);
    queue->push(4);
    queue->push(5);
    cout<<queue->isEmpty()<<endl;
    cout<<queue->show()<<endl;
    return 0;
}
