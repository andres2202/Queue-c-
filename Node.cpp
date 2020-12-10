//
// Created by Andrés Nausán and Sebastian Martinez on 7/12/2020

template<class T> class Node{
    private:
        T data;
        Node<T> *next;
    public:
        explicit Node(T data);
        T getData() const;
        void setData(T t);
        Node *getNext() ;
        void setNext(Node *node);
};

template<class T>
Node<T>::Node(T data) : data(data){
    next = nullptr;
}

template<class T>
Node<T> *Node<T>::getNext()  {
    return next;
}

template<class T>
T Node<T>::getData() const {
    return data;
}

template<class T>
void Node<T>::setData(T t) {
    T::data = t;
}

template<class T>
void Node<T>::setNext(Node *node) {
    Node::next = node;
}

