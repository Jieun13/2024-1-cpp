#include <iostream>
#include <cstring>
#include <sstream>

using namespace std;

int main()
{
    int a, c;
    string str;
    char b;
    getline(cin, str);

    int result = 0;

    stringstream strSplit(str);
    strSplit >> a >> b >> c;

    switch (b) {
    case '+':
        result = a + c;
        break;
    case '-':
        result = a - c;
        break;
    case '*':
        result = a * c;
        break;
    case '/':
        result = a / c;
        break;
    case '%':
        result = a % c;
        break;
    default:
        result = 0;
    }

    cout << a << b << c << "=" << result << endl;
}