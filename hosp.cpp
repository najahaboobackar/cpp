#include <iostream>
#include <string.h>
using namespace std;

class Hospital {
protected:
    int id, billno;
    char name[12], dep[12];

public:
    void getdetail() {
        cout << "Enter the details: id billno name dep" << endl;
        cin >> id >> billno >> name >> dep;
    }

    virtual void calcbill() = 0;

    void display() {
        cout << name << " " << dep << " " << billno << " " << id << endl;
    }
};

class inpatient : public Hospital {
    int room, cant, phar, day, lab;

public:
    inpatient(int r, int c, int p, int d1, int l) {
        room = r;
        cant = c;
        phar = p;
        day = d1;
        lab = l;
    }

    void calcbill() {
        display();
        int bill = room * day + cant + phar + lab;
        cout << "Bill amount for inPatient: " << bill << endl;
    }
};

class outpatient : public Hospital {
    int reg, con, med;

public:
    outpatient(int r, int c1, int m) {
        reg = r;
        con = c1;
        med = m;
    }

    void calcbill() {
        display();
        int bill1 = reg + con + med;
        cout << "Bill of outpatient: " << bill1 << endl;
    }
};

int main() {
    Hospital* h1;
    inpatient i(2, 100, 50, 4, 150);
    outpatient o(23, 546, 654);

    h1 = &i;
    h1->getdetail();
    h1->calcbill();

    h1 = &o;
    h1->getdetail();
    h1->calcbill();

    return 0;
}
