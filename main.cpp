#include <iostream>
#include "Node.cpp"
using namespace std;

int main() {
    Node<string> *node = new Node<string>("A");
    cout<<node->getData()<<endl;
    Node<string> *node1 = new Node<string>("B");
    node->setNext(node1);
    cout<<node1->getData()<<endl;
    return 0;
}
