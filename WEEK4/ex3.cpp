#include <iostream>
using namespace std;

class Rectangle {
private:
    double width;
    double height;
public:
    void setDimensions(double w, double h) {
        width = w;
        height = h;
    }
    double getArea() const {
        return width * height;
    }
    double getPerimeter() const {
        return 2 * (width + height);
    }
};

int main() {
    Rectangle r1, r2;
    r1.setDimensions(5.0, 3.0);
    r2.setDimensions(10.0, 2.5);

    cout << "Rectangle 1: Area = " << r1.getArea()
         << ", Perimeter = " << r1.getPerimeter() << endl;
    cout << "Rectangle 2: Area = " << r2.getArea()
         << ", Perimeter = " << r2.getPerimeter() << endl;

    return 0;
}