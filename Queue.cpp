#include "Node.cpp"

// Created by Andrés Nausán on 7/12/2020.
//
template<class T> class Queue{
private:
    Node<T> *head;

public:
    Queue() {
        this->head = nullptr;
    }

    void push(T data){
        if (head == nullptr){
            head = new Node<T>(data);
        }else{
            Node<T> *aux = head;
            while (aux->getNext() != nullptr){
                aux = aux->getNext();
            }
            aux->setNext(new Node<T>(data));
        }
    }

    bool isEmpty(){
        return head == nullptr;
    }

};

