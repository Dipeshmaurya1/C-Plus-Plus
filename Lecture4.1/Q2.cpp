#include <iostream>
using namespace std;

class P {
protected:
    float temperature;
};

class Q : public P {
public:
    void toFahrenheit() {
        cout << "Enter temperature in Celsius: ";
        cin >> temperature;
        temperature = (temperature * 9.0) / 5.0 + 32;
        cout << "Temperature in Fahrenheit: " << temperature << endl;
    }
};

class R : public Q {
public:
    void toKelvin() {
        temperature = (temperature - 32) * 5.0 / 9.0 + 273.15;
        cout << "Temperature in Kelvin: " << temperature << endl;
    }
};

int main() {
    R obj;
    obj.toFahrenheit();
    obj.toKelvin();
    return 0;
}
