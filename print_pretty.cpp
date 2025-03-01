#include <iostream>
#include <iomanip>  // For formatting
using namespace std;

int main() {
    int T;
    cin >> T;

    cout << setiosflags(ios::uppercase); // Ensure uppercase formatting for scientific notation
    cout << setw(0xf) << internal;       // Set width to 15, fill with '0', internal alignment

    while (T--) {
        double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C; // Read inputs

        // Print A in hexadecimal format with required formatting
        cout << hex << left << showbase << nouppercase  // Hexadecimal, left-aligned, prefixed with "0x", lowercase letters
             << static_cast<long long>(A) << endl;      // Convert A to long long before printing

        // Print B in decimal with specific width and formatting
        cout << dec << right << setw(15) << setfill('_') // DEcimal, Right-aligned, width=15, fill with '_'
             << showpos << fixed << setprecision(2)     // Show '+' for positives, fixed notation, 2 decimal places
             << B << endl;

        // Print C in scientific notation with required precision and formatting
        cout << scientific << uppercase << noshowpos   // SciEntific notation, uppercase 'E', no '+' sign for positives
             << setprecision(9)                         // 9 decimal places
             << C << endl;
    }

    return 0;
}
