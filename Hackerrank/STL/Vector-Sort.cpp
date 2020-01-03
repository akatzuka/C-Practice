#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int len, temp;
    vector<int> nums;

    cin >> len;
    for (int i = 0; i < len; i++)
    {
        cin >> temp;
        nums.push_back(temp);
    }

    sort(nums.begin(), nums.end());
    for (int k = 0; k < len; k++)
    {
        cout << nums[k] << " ";
    }
    return 0;
}
