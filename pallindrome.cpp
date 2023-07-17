#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Numstring {
    public:
        string str;
        int num;    
        
        Numstring(const string& s, int n) : str(s), num(n) {}
    
        bool palindrome(const string& s) const {
            string reversedStr = s;
            reverse(reversedStr.begin(), reversedStr.end());
            return (s == reversedStr);
        }
    
        bool palindrome(int number) const {
            int originalNum = number;
            int reversedNum = 0;
    
            while (originalNum != 0) {
                int digit = originalNum % 10;
                reversedNum = reversedNum * 10 + digit;
                originalNum /= 10;
            }
    
            return (number == reversedNum);
        }
};

int main() {
    Numstring ns1("madam", 1221);
    if (ns1.palindrome(ns1.str)) {
        cout << "String is a palindromes." << endl;
    } else {
        cout << "String is not a palindrome" << endl;
    }

    if (ns1.palindrome(ns1.num)) {
        cout << "Number is a palindromes." << endl;
    } else {
        cout << "Number is not a palindrome" << endl;
    }

    return 0;
}
