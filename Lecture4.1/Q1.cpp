#include <iostream>

using namespace std;

class X {
protected:
    int a, b, c;
};

class Y : public X {
public:
    void setData() {
        cout << "Enter Value of A: ";
        cin >> a;
        cout << "Enter Value of B: ";
        cin >> b;
        cout << "Enter Value of C: ";
        cin >> c;
    }

    int getData() {
        return a * a * a + b * b * b + c * c * c;
    }
};

int main() {
    Y obj;
    obj.setData();
    cout << "Sum of cubes of the three numbers: " << obj.getData() << endl;

    return 0;
}
