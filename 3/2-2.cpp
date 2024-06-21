#include<iostream>

using namespace std;

int main() {
    int i, j, mul;
    for (i = 1; i <= 9; i++) {
        for (j = 1; j <= 9; j++) {
            mul = i * j;
            cout << i << "*" << j << "=" << mul << '\t';
        }
        cout << '\n';
    }
}