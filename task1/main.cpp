#include <iostream>
#include <cmath>
class Point {
private:
    double x, y;
public:
    void set(double a, double b) {
        x = a, y = b;
    }
    double dist() {
        return sqrt(pow(x,2) + pow(y,2));
    }
};

int main() {
    Point p1, p2;
    p1.set(3, 4);
    p2.set(6, 7);
    std::cout << p1.dist() << std::endl;
    return 0;
}