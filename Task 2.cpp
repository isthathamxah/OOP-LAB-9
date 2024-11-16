#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    string name;
    int roll_no;
    string address;
public:
    void getdata() {
        cout << "Enter your Name: ";
        getline(cin, name); 

        cout << "Enter your Roll Number: ";
        cin >> roll_no; 

        cin.ignore(); 
        cout << "Enter your Address: ";
        getline(cin, address); 
    }
};
class Marks : public Student {
private:
    int sub1, sub2, sub3, total;
    float average;
public:
    void inputmarks() {
        cout << "Enter marks of subject 1: ";
        cin >> sub1;

        cout << "Enter marks of subject 2: ";
        cin >> sub2;

        cout << "Enter marks of subject 3: ";
        cin >> sub3;

        total = sub1 + sub2 + sub3;
        average = total / 3.0;
    }
    void show_detail() {
        cout << "\nMarks in subject 1 = " << sub1 << endl;
        cout << "Marks in subject 2 = " << sub2 << endl;
        cout << "Marks in subject 3 = " << sub3 << endl;
        cout << "Total Marks = " << total << endl;
        cout << "Average Marks = " << average << endl;
    }
};

int main() {
    Marks m;
    m.getdata();
    m.inputmarks();
    m.show_detail();

    return 0;
}
