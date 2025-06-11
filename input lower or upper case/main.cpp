#include<iostream>
using namespace std;
int main() {
    char ch;
    cout << "enter ch : ";
    cin >> ch;
    if (ch >= 'a' && ch <= 'z') {
        cout << "Lower case\n";
    } else {
        cout << "Upper case\n";
    }
    return 0;
}
