#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main() {
    int q;  // Number of queries
    cin >> q;
    set<int> s;  // Define a set to store unique integers

    // Loop through each query
    for (int i = 0; i < q; i++) {
        int y, x;  // y determines the operation, x is the value to operate on
        cin >> y >> x;

        if (y == 1) {
            // Insert x into the set
            s.insert(x);
        } else if (y == 2) {
            // Erase x from the set if it exists
            s.erase(x);
        } else if (y == 3) {
            // Check if x exists in the set
            set<int>::iterator itr = s.find(x);
            if (itr != s.end()) {
                cout << "Yes" << endl;  // x is present in the set
            } else {
                cout << "No" << endl;   // x is not found in the set
            }
        }
    }

    return 0;  // Exit program
}
