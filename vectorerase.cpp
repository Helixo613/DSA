#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    
    // Read n space-separated integers
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    // Read the position of the element to be removed (1-indexed)
    int pos;
    cin >> pos;
    // Erase the element at that position
    v.erase(v.begin() + pos - 1);
    
    // Read the range values a and b (1-indexed; a is inclusive, b is exclusive)
    int a, b;
    cin >> a >> b;
    // Erase the elements from position a to position b-1 in the updated vector
    v.erase(v.begin() + a - 1, v.begin() + b - 1);
    
    // Output the size of the updated vector
    cout << v.size() << "\n";
    
    // Output the elements of the updated vector separated by space
    for (int x : v) {
        cout << x << " ";
    }
    cout << "\n";
    
    return 0;
}