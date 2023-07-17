#include <iostream>
using namespace std;

class Matrix {
    int a[3][3];

public:
    void getelement() {
        cout << "Enter the elements" << endl;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cin >> a[i][j];
            }
        }
    }

    void put() {
        cout << "Entered elements are" << endl;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }

    Matrix operator~() {
        Matrix temp;
        for (int j = 0; j < 3; j++) {
            for (int i = 0; i < 3; i++) {
                temp.a[i][j] = a[j][i]; // Transpose the elements
            }
        }
        return temp;
    }
};

int main() {
    Matrix m1;
    m1.getelement();

    cout << "Original Matrix:" << endl;
    m1.put();

    cout << "Transposed Matrix:" << endl;
    (~m1).put(); // Directly apply the transpose operator on m1 and display the transposed matrix

    return 0;
}
