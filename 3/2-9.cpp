#include <iostream>
#include <cstring>
#include <sstream>

using namespace std;

int main() {
    string name;
    string address;
    int age;

    cout << "name?? : ";
    getline(cin, name);

    cout << "address?? : ";
    getline(cin, address);

    cout << "age?? : ";
    cin >> age;

    cout << name << ", " << address << ", " << age << endl;
}