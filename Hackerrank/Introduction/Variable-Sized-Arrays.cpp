#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, q, size, value, which, index;
    cin >> n >> q;
    vector<vector<int>> num_vec;

    for (int i = 0; i < n; ++i) {
        cin >> size;
        vector<int> ivec;
        for (int j = 0; j < size; ++j) {
            cin >> value;
            ivec.push_back(value);
        }
        num_vec.push_back(ivec);
    }

    for (int k = 0; k < q; ++k) {
        cin >> which >> index;
        cout << num_vec[which][index] << endl;
    }
    return 0;
}
