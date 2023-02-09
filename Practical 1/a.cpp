#include <iostream>
#include <string>

using namespace std;

class employee {
    public:
    string name, emailid;
    int empid, age;

    void getInfo() {
        cout << "Enter Employee Id: ";
        cin >> empid;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
        cout << "Enter EmailId: ";
        cin >> emailid;
    }

    void displayInfo() {
        cout << "\nEMPLOYEE DETAILS";
        cout << "\nEmployee Id: " << empid;
        cout << "\nName: " << name;
        cout << "\nAge: " << age;
        cout << "\nEmailId: " << emailid;
    }
};

int main() {
    employee e;
    e.getInfo();
    e.displayInfo();
    return 0;
}