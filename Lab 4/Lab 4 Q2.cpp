#include <iostream>
#include <string>
using namespace std;

class NUCES_Student {
private:
    int id;
    string name;

public:
    NUCES_Student() {
        id = 0;
        name = "Not Registered";
    }

    NUCES_Student(int id) {
        this->id = id;
        name = "Name Pending";
    }

    NUCES_Student(int id, string name) {
        this->id = id;
        this->name = name;
    }

    void display() {
        cout << "Student ID: " << id << endl;
        cout << "Student Name: " << name << endl;
    }
};

int main() {
    NUCES_Student s1;
    cout << "Default Constructor:" << endl;
    s1.display();
    cout << endl;

    NUCES_Student s2(12345);
    cout << "Parameterized Constructor (Version 1):" << endl;
    s2.display();
    cout << endl;

    NUCES_Student s3(67890, "Abdullah Adhi");
    cout << "Parameterized Constructor (Version 2):" << endl;
    s3.display();

    return 0;
}
