
#include<iostream>
using namespace std;

#define NAME_SIZE 50

class Person {
    int id;
    char name[NAME_SIZE];
public:
    void aboutMe(){
        cout << "I am a Person";
    }
};

class Student : public Person {
    public:
        void aboutMe(){
            cout << "I am a Student";
        }
};

int main(){
    Student * p = new Student();
    p->aboutMe();
    delete p;
    return 0;
}
