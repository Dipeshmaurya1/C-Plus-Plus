#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    try {
        if (age < 18) {
            throw 0;
        } else {
            cout << "You are eligible to vote." << endl;
        }
    } catch (int) {
        cout << "You are not eligible to vote." << endl;
    }

    return 0;
}
