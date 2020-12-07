//
// Created by Andrés Nausán and Sebastian Martinez on 7/12/2020

template<class T> struct Node{
    private:
        T data;
        Node<T> *next;
    public:
        Node(T data);
        T getData() const;
        void setData(T t);
        Node *getNext() ;
        void setNext(Node *node);

//    Node(T data) : data(data) {
//
//}
//
//    T getData()  {
//        return data;
//    }
//
//    void setData(T data) {
//        Node::data = data;
//    }
//
//    Node<T> *getNext() {
//        return next;
//    }
//
//    void setNext(Node<T> *next) {
//        Node::next = next;
//    }
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

