#include <clocale>
#include <string>
#include <iostream>
#include "Node.cpp"
using namespace std;

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

    string show(){
        string data = "->";
        Node<T> *aux = head;
        while (aux != NULL){
            data += to_string(aux->getData()) +"->";
            aux = aux->getNext();
        }
        return data;
    }
};

