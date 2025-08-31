#include <iostream>
using namespace std;

class Student {
public:
    string name;
    void PrintData() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "GPA: " << gpa << endl;
    }    

    Student(string n,int i, double g){
        name=n;
        id=i;
        gpa=g;
    }

private:
    int id;

protected:
    double gpa;
};

int main() {
    Student s("Alice", 12345, 3.8);
    s.PrintData();

    return 0;
}
