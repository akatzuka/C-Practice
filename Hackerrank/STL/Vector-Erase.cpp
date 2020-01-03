#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int len, temp, erase_pos, erase_a, erase_b;
    vector<int> nums;

    cin >> len;
    for (int i = 0; i < len; i++)
    {
        cin >> temp;
        nums.push_back(temp);
    }

    cin >> erase_pos >> erase_a >> erase_b;

    nums.erase(nums.begin() + erase_pos-1);
    nums.erase(nums.begin() + erase_a-1, nums.begin() + erase_b-1);
    cout << nums.size() << endl;

    for (int k = 0; k < nums.size(); k++)
    {
        cout << nums[k] << " ";
    }
    return 0;
}
