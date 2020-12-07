#include <clocale>
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
    Queue(Comparator<T> *comparator1) {
        this->head = NULL;
        this->comparator = comparator1;
    }

    void push(T data){
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

    bool isEmpty(){
        return (head == NULL);
    }

    T poll(){
        if (head != NULL){
            T auxData = head->getData();
            head = head->getNext();
            return auxData;
        }
        return NULL;
    }

    T peek(){
        if (head != NULL){
            return head->getData();
        }
        return NULL;
    }

    string show(){
        string data = "->";
        Node<T> *aux = head;
        while (aux != NULL){
//          data += to_string(aux->getData()) +"->";
            data += aux->getData() +"->";
            aux = aux->getNext();
        }
        return data;
    }

};

