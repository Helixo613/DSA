#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm> // For using lower_bound function
using namespace std;

int main() {
    int n;
    cin >> n; // Read the number of elements in the vector
    
    vector<int> v(n); // Declare a vector of size n
    for (int i = 0; i < n; i++) {
        cin >> v[i]; // Read n elements into the vector
    }
    
    int q;
    cin >> q; // Read the number of queries

    for (int j = 0; j < q; j++) {
        int k;
        cin >> k; // Read the query number to search
        
        // Find the lower bound (first occurrence of k or the next greater element)
        vector<int>::iterator low = lower_bound(v.begin(), v.end(), k);
        
        // Check if the element found is exactly equal to k
        if (v[low - v.begin()] == k) {
            cout << "Yes " << (low - v.begin() + 1) << endl; // Print 1-based index
        } else {
            cout << "No " << (low - v.begin() + 1) << endl; // Print 1-based position where k would be inserted
        }
    }

    /* End of program */
    return 0;
}
