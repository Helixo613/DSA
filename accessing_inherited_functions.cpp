#include <iostream>

using namespace std;

// Base class A: Provides a function that multiplies a number by 2
class A {
public:
    A() { callA = 0; } // Constructor initializes callA to 0

private:
    int callA; // Counter for the number of times func() is called
    void inc() { callA++; } // Increment counter

protected:
    void func(int &a) {  // Multiplies a by 2 and increments counter
        a = a * 2;
        inc();
    }

public:
    int getA() { return callA; } // Returns the count of function calls
};

// Base class B: Provides a function that multiplies a number by 3
class B {
public:
    B() { callB = 0; } // Constructor initializes callB to 0

private:
    int callB; // Counter for the number of times func() is called
    void inc() { callB++; } // Increment counter

protected:
    void func(int &a) {  // Multiplies a by 3 and increments counter
        a = a * 3;
        inc();
    }

public:
    int getB() { return callB; } // Returns the count of function calls
};

// Base class C: Provides a function that multiplies a number by 5
class C {
public:
    C() { callC = 0; } // Constructor initializes callC to 0

private:
    int callC; // Counter for the number of times func() is called
    void inc() { callC++; } // Increment counter

protected:
    void func(int &a) {  // Multiplies a by 5 and increments counter
        a = a * 5;
        inc();
    }

public:
    int getC() { return callC; } // Returns the count of function calls
};

// Derived class D: Inherits from A, B, and C
class D : public A, public B, public C {
    int val; // The value that gets updated using factors of 2, 3, and 5

public:
    // Constructor: Initialize val to 1
    D() { val = 1; }

    // Function to update val based on divisibility by 2, 3, and 5
    void update_val(int new_val) {
        while (new_val % 2 == 0) {  // If divisible by 2
            A::func(val);           // Call func() from class A
            new_val /= 2;
        }
        while (new_val % 3 == 0) {  // If divisible by 3
            B::func(val);           // Call func() from class B
            new_val /= 3;
        }
        while (new_val % 5 == 0) {  // If divisible by 5
            C::func(val);           // Call func() from class C
            new_val /= 5;
        }
    }

    // Function to check and print results (do not delete this line)
    void check(int);
};

// Function definition for check()
void D::check(int new_val) {
    update_val(new_val); // Update val based on the input number
    // Print final value and function call counts
    cout << "Value = " << val << endl;
    cout << "A's func called " << getA() << " times" << endl;
    cout << "B's func called " << getB() << " times" << endl;
    cout << "C's func called " << getC() << " times" << endl;
}

// Main function
int main() {
    D d;  // Create an object of class D
    int new_val;
    cin >> new_val; // Take input value from user
    d.check(new_val); // Call check() function

    return 0; // Indicate successful program execution
}
