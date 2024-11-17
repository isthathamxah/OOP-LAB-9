#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    string name;
    int id;

public:
    void input() {
        cout << "Enter name of the employee: ";
        getline(cin, name);
        cout << "Enter the identification number of the employee: ";
        cin >> id;
        cin.ignore(); 
    }

    void show()  {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
    }
};

class Manager : public Employee {
private:
    string title;
    string salary;

public:
    void input() {
        Employee::input();
        cout << "Enter the title: ";
        getline(cin, title);
        cout << "Enter the Salary: ";
        getline(cin, salary);
    }

    void show()  {
        cout << "Data for manager:" << endl;
        Employee::show();
        cout << "Title: " << title << endl;
        cout << "Salary: " << salary << endl;
    }
};


class Scientist : public Employee {
private:
    int publications;
    string salary;

public:
    void input() {
        Employee::input();
        cout << "Enter the number of publications: ";
        cin >> publications;
        cin.ignore(); 
        cout << "Enter the Salary: ";
        getline(cin, salary);
    }

    void show() {
        cout << "Data for scientist:" << endl;
        Employee::show();
        cout << "Number of Publications: " << publications << endl;
        cout << "Salary: " << salary << endl;
    }
};

class Clerks : public Employee {
private:
    int overtime;

public:
    void input() {
        Employee::input();
        cout << "Enter the number of overtime hours worked: ";
        cin >> overtime;
    }

    void show()  {
        cout << "Data for clerk:" << endl;
        Employee::show();
        cout << "Overtime Hours: " << overtime << endl;
    }
};

int main() {
    Manager manager1, manager2;
    Scientist scientist;
    Clerks clerk;

    cout << "Enter the data for first manager:" << endl;
    manager1.input();
    cout << "\n";
    cout << "**************************************" << endl;
    cout << "\n";
    cout << "Enter the data for second manager:" << endl;
    manager2.input();
    cout << "\n";
    cout << "**************************************" << endl;
    cout << "\n";
    cout << "Enter the data for scientist:" << endl;
    scientist.input();
    cout << "\n";
    cout << "**************************************" << endl;
    cout << "\n";
    cout << "Enter the data for clerk:" << endl;
    clerk.input();
    cout << "\n";
    cout << "**************************************" << endl;
    cout << "\n";
    manager1.show();
    cout << "\n";
    cout << "**************************************" << endl;
    cout << "\n";
    manager2.show();
    cout << "\n";
    cout << "**************************************" << endl;
    cout << "\n";
    scientist.show();
    cout << "\n";
    cout << "**************************************" << endl;
    cout << "\n";
    clerk.show();

    return 0;
}
