#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

// If type is 1: Add an element to the set.
// If type is 2: Delete an element from the set. (If the number is not present in the set, then do nothing).
// If type is 3: If the number is present in the set, then print "Yes"(without quotes) else print "No"(without quotes).

int main() {
    int queries;
    set<int> s;

    cin >> queries;
    for (int i = 0; i < queries; i++)
    {
        int query, type;
        cin >> type >> query;
        switch(type)
        {
            case 1:
                s.insert(query);
                break;
            case 2:
                s.erase(query);
                break;
            case 3:
                cout << (s.find(query) == s.end() ? "No" : "Yes") << endl;
                break;
        }
    }

    return 0;
}
