#include <iostream>
using namespace std;

int main() {
  // Calculate the area of a circle
  const double PI = 3.14159;
  double radius;
  cout << "Enter the radius of the circle: ";
  cin >> radius;
  double circle_area = PI * radius * radius;
  cout << "The area of the circle is: " << circle_area << endl;

  // Calculate the area of a rectangle
  double length, width;
  cout << "Enter the length and width of the rectangle: ";
  cin >> length >> width;
  double rectangle_area = length * width;
  cout << "The area of the rectangle is: " << rectangle_area << endl;

  return 0;
}
