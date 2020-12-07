#include <clocale>
#include "Node.cpp"

// Created by Andrés Nausán on 7/12/2020.
//
template<class T> class Queue{
private:
    Node<T> *head;

public:
    Queue() {
        this->head = NULL;
    }

    void push(T data){
        if (head == nullptr){
            head = new Node<T>(data);
        }else{
            Node<T> aux = *head;
            while (aux.getNext() != NULL){
                aux = *aux.getNext();
            }
            aux.setNext(new Node<T>(data));
        }
    }
    bool isEmpty(){
        return (head == NULL);
    }
};

