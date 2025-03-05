#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    // Constructor
    Person(string n, int a) {
        name = n;
        age = a;
    }

    // Getter for name
    string getName() {
        return name;
    }

    // Setter for name
    void setName(string n) {
        name = n;
    }

    // Getter for age
    int getAge() {
        return age;
    }

    // Setter for age
    void setAge(int a) {
        if (a > 0) {
            age = a;
        } else {
            cout << "Invalid age!" << endl;
        }
    }

};

int main() {
    
    Person p1("Hosein", 30);

    p1.setName("Hossein");
    p1.setAge(21);
    
    string p1_name = p1.getName();
    int p1_age = p1.getAge();

    cout << "Name:" << p1_name << endl;

    return 0;
}