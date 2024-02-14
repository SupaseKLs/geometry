#include <iostream>
#include <cmath>

using namespace std;

int main() {
    char shape;
    const float PI = 3.141592653589793;

    cout << "Menu:\n";
    cout << "a. Rectangular prism\n";
    cout << "b. Triangular prism\n";
    cout << "c. Circular prism\n";
    cout << "d. Cylinder\n";
    cout << "e. Rectangle\n";
    cout << "f. Trapezoid\n";
    cout << "g. Circle\n";
    cout << "h. Triangle\n";
    cout << "i. Equilateral triangle\n";
    cout << "j. Volume of rectangular pyramid\n";
    cout << "k. Volume of sphere\n";
    cout << "Enter your choice: ";
    cin >> shape;

    switch (shape) {
    case 'a': {
        float length, width, height;
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter width: ";
        cin >> width;
        cout << "Enter height: ";
        cin >> height;
        float volume = length * width * height;
        cout << "Volume of rectangular prism: " << volume << endl;
        break;
    }
    case 'b': {
        float base, height, prismHeight;
        cout << "Enter base: ";
        cin >> base;
        cout << "Enter base height: ";
        cin >> height;
        cout << "Enter prism height: ";
        cin >> prismHeight;
        float area = 0.5 * base * height;
        float volume = area * prismHeight;
        cout << "Volume of triangular prism: " << volume << endl;
        break;
    }
    case 'c': {
        float radius, height;

        cout << "Enter radius: ";
        cin >> radius;

        cout << "Enter height: ";
        cin >> height;

        float circle_area = PI * radius * radius;

        float volume = circle_area * height;

        cout << "Volume of circular prism: " << volume << endl;
        break;
    }
    case 'd': {
        float radius, height;
        cout << "Enter radius: ";
        cin >> radius;
        cout << "Enter height: ";
        cin >> height;
        float area = PI * radius * radius;
        float volume = area * height;
        cout << "Volume of cylinder: " << volume << endl;
        break;
    }
    case 'e': {
        int width, height;
        cout << "Enter width: ";
        cin >> width;
        cout << "Enter height: ";
        cin >> height;
        int area = width * height;
        cout << "Area of rectangle: " << area << endl;
        break;
    }
    case 'f': {
        float base1, base2, height;
        cout << "Enter base 1: ";
        cin >> base1;
        cout << "Enter base 2: ";
        cin >> base2;
        cout << "Enter height: ";
        cin >> height;
        float area = (base1 + base2) * height / 2;
        cout << "Area of trapezoid: " << area << endl;
        break;
    }
    case 'g': {
        float radius;
        cout << "Enter radius: ";
        cin >> radius;
        float area = PI * radius * radius;
        cout << "Area of circle: " << area << endl;
        break;
    }
    case 'h': {
        float base, height;
        cout << "Enter base: ";
        cin >> base;
        cout << "Enter height: ";
        cin >> height;
        float area = (base * height) / 2;
        cout << "Area of triangle: " << area << endl;
        break;
    }
    case 'i': {
        float side;
        cout << "Enter side length: ";
        cin >> side;
        float area = 0.433 * side * side;
        cout << "Area of equilateral triangle: " << area << endl;
        break;
    }
    case 'j': {
        float baseLength, baseWidth, height;
        cout << "Enter base length: ";
        cin >> baseLength;
        cout << "Enter base width: ";
        cin >> baseWidth;
        cout << "Enter height: ";
        cin >> height;
        float area = baseLength * baseWidth;
        float volume = (1.0 / 3.0) * area * height;
        cout << "Volume of rectangular pyramid: " << volume << endl;
        break;
    }
    case 'k': {
        float radius;
        cout << "Enter radius: ";
        cin >> radius;
        float volume = (4.0 / 3.0) * PI * pow(radius, 3.0);
        cout << "Volume of sphere: " << volume << endl;
        break;
    }
    default:
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
