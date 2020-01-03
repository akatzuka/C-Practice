#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int len;
    cin >> len;
    int arr[len];
    for (int i = 0; i < len; i++)
    {
        cin >> arr[i];
    }
    for (int j = len - 1; j >= 0; j--)
    {
        cout << arr[j] << " ";
    }
    return 0;
}
