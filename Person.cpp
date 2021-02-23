
#include <string>
#include "iostream"
using namespace std;
class Person{
    private:
        string name;
        string lastName;
        int age;
    public:
    explicit Person(string name,string  lastname,int age);
    const string getName() const;
    void setName(const string &name);
    const string getLastName() const;
    void setLastName(const string &lastName);
    int getAge() const;
    void setAge(int age);
    string toString();
};

Person::Person(string name, string lastname,int age) {
    this->name = name;
    this->age = age;
    this->lastName = lastname;
}

const string Person::getName() const {
    return name;
}

void Person::setName(const string &name) {
    Person::name = name;
}

const string Person::getLastName() const {
    return lastName;
}

void Person::setLastName(const string &lastName) {
    Person::lastName = lastName;
}

int Person::getAge() const {
    return age;
}

void Person::setAge(int age) {
    Person::age = age;
}

string Person::toString() {
    return "[ "+getName()+" "+getLastName()+" "+to_string(getAge())+" ]";
}


