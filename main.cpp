#include <iostream>
#include "Queue.cpp"
#include "Person.cpp"
using namespace std;

class ComparatorQueue : public Comparator<int>{
    int compare(int o1, int o2) override;
};

int ComparatorQueue::compare(int o1, int o2) {
    return o1-o2;
}

class ComparatorPerson: public Comparator<Person>{
  int compare(Person o1, Person o2) override;
};

int ComparatorPerson::compare(Person o1, Person o2) {
    return o1.getLastName().compare(o2.getLastName());
}

int main() {
    Node<int> *node = new Node<int>(1);
    cout<<node->getData()<<endl;
    Node<int> *node1 = new Node<int>(2);
    node->setNext(node1);
    cout<<node1->getData()<<endl;
    cout<<"---------------"<<endl;
    Queue<int> *queue = new Queue<int>(new ComparatorQueue());
    cout<<queue->isEmpty()<<endl;
    queue->push(7);
    queue->push(4);
    queue->push(5);
    cout<<queue->isEmpty()<<endl;
    cout<<queue->showData()<<endl;
    queue->poll();
    cout<<queue->peek()<<endl;
    cout<<queue->showData()<<endl;
    string result7 = queue->exist(4)? "true":"false";
    cout<<result7<<endl;
    Person *person = new Person("Andres", "Lopez", 30);
    Person *person1 = new Person("Kevin","Arcos",31);
    Person *person2 = new Person("Name","Lastname",32);
    Person *person3 = new Person("Biviana","Sosa",33);
    Person *person4 = new Person("Diomedez","Diaz",34);
    Person *person5 = new Person("Carlos","martinez",35);
    cout<<"----------------Persons---------------------------"<<endl;
    Queue<Person> *pQueue = new Queue<Person>(new ComparatorPerson());
    string isEmpty = pQueue->isEmpty()?"true":"false";
    cout<<"lista vacia: "+isEmpty<<endl;
    pQueue->push(*person);
    pQueue->push(*person1);
    pQueue->push(*person2);
    pQueue->push(*person3);
    pQueue->push(*person4);
    cout<<pQueue->show()<<endl;
    string existPerson = pQueue->exist(*person)?"true":"false";
    cout<<"existe Andres Lopez:"+existPerson<<endl;
    existPerson = pQueue->exist(*person5)?"true":"false";
    cout<<"existe Carlos martinez:"+existPerson<<endl;
    isEmpty = pQueue->isEmpty()?"true":"false";
    cout<<"lista vacia: "+isEmpty<<endl;
    cout<<"peek:"+pQueue->peek().toString()<<endl;
    cout<<pQueue->show()<<endl;
    cout<<"poll:"+pQueue->poll().toString()<<endl;
    cout<<pQueue->show()<<endl;
    pQueue->poll();
    pQueue->poll();
    pQueue->poll();
    pQueue->poll();
    cout<<pQueue->peek().toString()<<endl;
    cout<<pQueue->peek().toString()<<endl;
    cout<<pQueue->peek().toString()<<endl;
    cout<<pQueue->peek().toString()<<endl;
    cout<<pQueue->peek().toString()<<endl;
    cout<<pQueue->peek().toString()<<endl;
    cout<<pQueue->peek().toString()<<endl;
    pQueue->push(*person5);
    cout<<pQueue->peek().toString()<<endl;
    cout<<pQueue->peek().toString()<<endl;
    cout<<pQueue->peek().toString()<<endl;
    cout<<pQueue->peek().toString()<<endl;
    cout<<pQueue->peek().toString()<<endl;
    cout<<pQueue->peek().toString()<<endl;
    cout<<"----------"<<endl;
    return 0;
}
