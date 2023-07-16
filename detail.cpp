#include <iostream>
#include <fstream>
using namespace std;

int main() {
    char name[32];
    int salary;
    char job[23];
    int age;
    char address[123];

    ofstream out;
    out.open("personal.txt", ios::out);
    if (!out) {
        cerr << "Error opening personal.txt" << endl;
        return 1;
    }

    cout << "Enter the name, age, and address: ";
    cin >> name >> age >> address;
    out << name << " " << age << " " << address;
    out.close();

    out.open("professional.txt", ios::out);
    if (!out) {
        cerr << "Error opening professional.txt" << endl;
        return 1;
    }

    cout << "Enter the salary and job: ";
    cin >> salary >> job;
    out << salary << " " << job;
    out.close();

    ifstream in;
    in.open("personal.txt", ios::in);
    if (!in) {
        cerr << "Error opening personal.txt" << endl;
        return 1;
    }

    cout << "Personal Details:" << endl;
    in >> name >> age >> address;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Address: " << address << endl;
    in.close();

    in.open("professional.txt", ios::in);
    if (!in) {
        cerr << "Error opening professional.txt" << endl;
        return 1;
    }

    cout << "Professional Details:" << endl;
    in >> salary >> job;
    cout << "Salary: " << salary << endl;
    cout << "Job: " << job << endl;
    in.close();

    return 0;
}
