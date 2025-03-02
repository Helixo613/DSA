#include <iostream>

using namespace std;

// Base class representing a Rectangle
class Rectangle {
protected:
    int width;  // Width of the rectangle
    int height; // Height of the rectangle

public:
    // Function to display width and height of the rectangle
    void display() {
        cout << width << " " << height << endl;
    }
};

// Derived class that extends Rectangle to calculate area
class RectangleArea : public Rectangle {
public:
    // Function to read input for width and height
    void read_input() {
        cin >> width >> height;  // Read width and height from user input
    }

    // Function to display the area of the rectangle
    void display() {
        cout << (width * height) << endl; // Print the computed area
    }
};

int main() {
    // Declare a RectangleArea object
    RectangleArea r_area;

    // Read width and height from input
    r_area.read_input();

    // Print width and height using the base class function
    r_area.Rectangle::display();

    // Print the area using the derived class function
    r_area.display();

    return 0; // Indicate successful execution
}