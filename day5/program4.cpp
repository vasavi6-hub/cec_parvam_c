#include <iostream>
#include <string>
using namespace std;

// Base Class
class Employee {
protected:
    string name;
    int empId;

public:
    Employee(string n, int id) : name(n), empId(id) {}

    void display() {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << empId << endl;
    }
};

// Single Inheritance
class Manager : public Employee {
protected:
    string department;

public:
    Manager(string n, int id, string dept)
        : Employee(n, id), department(dept) {}

    void display() {
        Employee::display();
        cout << "Department: " << department << endl;
    }
};

// Multilevel Inheritance
class HRManager : public Manager {
private:
    int employeesHired;

public:
    HRManager(string n, int id, string dept, int hired)
        : Manager(n, id, dept), employeesHired(hired) {}

    void display() {
        Manager::display();
        cout << "Employees Hired: " << employeesHired << endl;
    }
};

// Hierarchical Inheritance
class TeamLead : public Employee {
private:
    int teamSize;

public:
    TeamLead(string n, int id, int size)
        : Employee(n, id), teamSize(size) {}

    void display() {
        Employee::display();
        cout << "Team Size: " << teamSize << endl;
    }
};

int main() {

    cout << "---- Single Inheritance Example ----" << endl;
    Manager m1("Rahul", 101, "Development");
    m1.display();

    cout << "\n---- Multilevel Inheritance Example ----" << endl;
    HRManager hr1("Priya", 102, "Human Resources", 50);
    hr1.display();

    cout << "\n---- Hierarchical Inheritance Example ----" << endl;
    TeamLead tl1("Amit", 103, 8);
    tl1.display();

    return 0;
}