#include <iostream>
#include <string>
using namespace std;

int main() {
	string str1, str2;
    getline(cin, str1);
    getline(cin, str2);

    string a, b;
    a = str1;
    b = str2;
    a[0] = str2[0];
    b[0] = str1[0];

    cout << str1.size() << " " << str2.size() << endl;
    cout << str1 + str2 << endl;
    cout << a << " " << b << endl;

    return 0;
}
