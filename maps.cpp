#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n; // Read number of queries
    map<string, int> m; // Map to store names and associated values

    for (int i = 0; i < n; i++) {
        int q;
        cin >> q; // Read query type
        string name;

        if (q == 1) { 
            int num;
            cin >> name >> num;
            m[name] += num; // Directly update the value
        } 
        else if (q == 2) { 
            cin >> name;
            auto it = m.find(name); 
            if (it != m.end()) m.erase(it); // Only erase if the name exists
        } 
        else if (q == 3) { 
            cin >> name;
            auto it = m.find(name);
            cout << (it != m.end() ? it->second : 0) << endl; // Print value if found, else print 0
        }
    }

    return 0;
}


