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
    //Test de Nodos
    Node<int> *node = new Node<int>(1);
    cout<<node->getData()<<endl;
    Node<int> *node1 = new Node<int>(2);
    node->setNext(node1);
    cout<<node1->getData()<<endl;
    cout<<"---------------"<<endl;
    //Test de Colas
    Queue<int> *queue = new Queue<int>(new ComparatorQueue()); //Crear colas
    cout<<queue->isEmpty()<<endl; // Comprobar si esta vacia
    queue->push(7); // agregar
    queue->push(4);
    queue->push(5);
    cout<<queue->isEmpty()<<endl;
    cout<<queue->show()<<endl; // Imprimir
    queue->poll(); // Eliminar
    cout<<queue->peek()<<endl; // Mostrar el primero de la cola
    cout<<queue->show()<<endl;
    string result7 = queue->exist(7)? "Exist":"Not"; // Si existe en la cola o no
    cout<<result7<<endl;
    return 0;
}
