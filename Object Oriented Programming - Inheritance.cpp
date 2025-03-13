#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
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
// Student class inherits from Person clas
class Student : public Person {
private:
    int studentID;
    double grade;

public:
    // Constructor
    Student(string n, int a, int Sid ,double grd) : Person(n, a), studentID(Sid) , grade(grd) {}

    //Getter for StudentID
    int getStudentID() {
        return studentID;
    }
    
    //Setter for StudentID
    void setStudentID(int Sid) {
        studentID = Sid;
    }
    
    //Getter for Grade
    int getGrade() {
        return grade;
    }
    
    //Setter for Grade
    void setGrade(double grd) {
        grade = grd;
    }

    // Getter for StudentName
    string getStudentName() {
        return name;
    }

    // Setter for StudentName
    void setStudentName(string n) {
        name = n;
    }

    // Getter for StudentAge
    int getStudentAge() {
        return age;
    }

    // Setter for StudentAge
    void setStudentAge(int a) {
        if (a > 0) {
            age = a;
        } else {
            cout << "Invalid age!" << endl;
        }
    }
    
};

// Teacher class inherits from Person class and Student Class
class Teacher : public Person , public Student {
private:
    int teacherID;
    double salary;
    string position;
public:
    // Constructor
    Teacher(string n, int a, int Sid ,double grd ,int Tid , double slry ,string post) : Person(n, a), Student(n, a, Sid, grd), teacherID(Tid) ,salary(slry) ,position(post) {}

    //Getter for TeacherID
    int getTeacherID() {
        return teacherID;
    }
    
    //Setter for StudentID
    void setTeacherID(int Tid) {
        teacherID = Tid;
    }
    
    //Getter for Salary
    double getSalary() {
        return salary;
    }
    
    //Setter for Salary
    void setSalary(double slry) {
        salary = slry;
    }

    //Getter for Position
    string getPosition() {
        return position;
    }
    
    //Setter for Position
    void setPosition(string post) {
        position = post;
    }
};

int main() {
    
    Person P1("Hosein", 30);
    Student S1("Hosein", 30 , 10039 ,19.73);
    Teacher T1("Hosein", 30 , 10039 ,19.73 , 20039 , 100000 ,"OOP");

    //impossible:
    //string P1_name = P1.name;
    //int P1_age = P1.age;
    //int S1_studentID = S1.studentID;
    //double S1_grade = S1.grade;
    //int T1_teacherID = T1.teacherID;
    //double T1_salary = T1.salary;
    //string T1_positiion = T1.position;
    
    //possible
    P1.setName("Hossein");
    P1.setAge(21);
    S1.setStudentName("Hossein");
    S1.setStudentAge(21);
    S1.setStudentID(10021);
    S1.setGrade(20);
    T1.setTeacherID(10001);
    T1.setSalary(1000000);
    T1.setPosition("Object Orientad Programming");

    string Name = P1.getName();
    int Age = P1.getAge();
    Name = S1.getStudentName();
    Age = S1.getStudentAge();
    int SID = S1.getStudentID();
    double Grade = S1.getGrade();
    int TID = T1.getTeacherID();
    string Post = T1.getPosition();
    
    return 0;
}