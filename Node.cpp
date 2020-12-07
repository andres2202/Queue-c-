//
// Created by Andrés Nausán on 7/12/2020

template<class T> class Node{
    private:
    T data;
    Node<T> *next;

public:
    Node(T data) : data(data) {}

    T getData() const {
        return data;
    }

    Node<T> *getNext() const {
        return next;
    }

    void setNext(Node<T> *next) {
        Node::next = next;
    }
};

