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
    double getX() {
        return x;
    }
    double getY() {
        return y;
    }
};

class Polar {
private:
    double r, phi;
public:
    void setPolar(double a, double b) {
        r = a, phi = b;
    }
    double getR() {
        return r;
    }
    double getPhi() {
        return phi;
    }
    void setCord(Point a) {
        r = sqrt(pow(a.getX(), 2) + pow(a.getY(), 2));
        phi = atan(a.getY()/a.getX());
    }
    void print() {
        std::cout << "r: " << r << "; phi: " << phi << '\n';
    }
};
int main() {
    Point p;
    p.set(3, 4);
    Polar pol;
    pol.setCord(p);
    pol.print();
    return 0;
}