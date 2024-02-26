#include<iostream>
using namespace std;

#include <iostream>
#include <string>

using namespace std;

class DiamondCompany {
private:
    int comp_id;
    string comp_name;
    int comp_staff_quantity;
    double comp_revenue;
    int comp_import_raw_diamonds;
    int comp_export_diamonds;
    string comp_ceo;

public:
    DiamondCompany(int id, string name, int staff_qty, double revenue, int raw_diamonds, int exported_diamonds, string ceo)
        : comp_id(id), comp_name(name), comp_staff_quantity(staff_qty), comp_revenue(revenue), comp_import_raw_diamonds(raw_diamonds), comp_export_diamonds(exported_diamonds), comp_ceo(ceo) {}

    void displayInfo() {
        cout << "Company ID: " << comp_id << endl;
        cout << "Company Name: " << comp_name << endl;
        cout << "Staff Quantity: " << comp_staff_quantity << endl;
        cout << "Annual Revenue: $" << comp_revenue << endl;
        cout << "Raw Diamonds Imported per Year: " << comp_import_raw_diamonds << endl;
        cout << "Diamonds Exported per Year: " << comp_export_diamonds << endl;
        cout << "CEO: " << comp_ceo << endl;
    }
};

int main() {
    int id, staff_qty, raw_diamonds, exported_diamonds;
    double revenue;
    string name, ceo;

    cout << "Enter Company ID: ";
    cin >> id;
    cout << "Enter Company Name: ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter Staff Quantity: ";
    cin >> staff_qty;
    cout << "Enter Annual Revenue: $";
    cin >> revenue;
    cout << "Enter Raw Diamonds Imported per Year: ";
    cin >> raw_diamonds;
    cout << "Enter Diamonds Exported per Year: ";
    cin >> exported_diamonds;
    cout << "Enter CEO Name: ";
    cin.ignore();
    getline(cin, ceo);

    DiamondCompany company(id, name, staff_qty, revenue, raw_diamonds, exported_diamonds, ceo);
    company.displayInfo();

    return 0;
}
