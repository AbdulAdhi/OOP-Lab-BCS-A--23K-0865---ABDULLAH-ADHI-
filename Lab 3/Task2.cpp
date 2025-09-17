#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;

    void setRollNo(int r) {
        rollNumber = r;
    }

    int getRollNo() {
        return rollNumber;
    }

private:
    int rollNumber;
};

int main() {
    Student s1;
    s1.name = "Saad";
    s1.setRollNo(1013);

    cout << "Student Name: " << s1.name << endl;
    cout << "Roll Number: " << s1.getRollNo() << endl;

    return 0;
}
