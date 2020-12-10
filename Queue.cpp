#include <string>
#include <iostream>
#include "Node.cpp"
#include "Comparator.cpp"
using namespace std;

template<class T> class Queue{
    private:
        Node<T> *head;
        Comparator<T> *comparator;
    public:
        explicit Queue(Comparator<T> *comparator1);
        void push(T data);
        bool isEmpty();
        T poll();
        T peek();
        bool exist(T data);
        string show();
};

template<class T>
Queue<T>::Queue(Comparator<T> *comparator1) {
    this->head = NULL;
    this->comparator = comparator1;
}

template<class T>
void Queue<T>::push(T data) {
    if (head == NULL){
        head = new Node<T>(data);
    }else{
        Node<T> *aux = head;
        while (aux->getNext() != NULL){
            aux = aux->getNext();
        }
        aux->setNext(new Node<T>(data));
    }
}

template<class T>
bool Queue<T>::isEmpty() {
    return (head == NULL);
}

template<class T>
T Queue<T>::poll() {
    if (head != NULL){
        T auxData = head->getData();
        head = head->getNext();
        return auxData;
    }
    return NULL;
}

template<class T>
T Queue<T>::peek() {
    if (head != NULL){
        return head->getData();
    }
    return NULL;
}

template<class T>
bool Queue<T>::exist(T data) {
    Node<T> *auxNode = head;
    while (auxNode != NULL){
        if (comparator->compare(auxNode->getData(),data) == 0){
            return true;
        }
        auxNode = auxNode->getNext();
    }
    return false;
}

template<class T>
string Queue<T>::show() {
    string data = "->";
    Node<T> *aux = head;
    while (aux != NULL){
        data += to_string(aux->getData()) +"->";
        aux = aux->getNext();
    }
    return data;
}

