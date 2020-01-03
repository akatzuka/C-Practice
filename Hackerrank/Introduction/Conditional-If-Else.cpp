#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string arr[10] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "Greater than 9"};
    if(n > 9)
    {
        cout << arr[9];
        return 0;
    }
    else
    {
        cout << arr[n - 1];
    }
    return 0;
}
