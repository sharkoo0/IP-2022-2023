#include <iostream>
#include <cmath>

bool isLetter(char c) {
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}

void printLetters(char c) {
    if (!isLetter(c)) {
        return;
    }

    std::cout << c << std::endl;
    printLetters(c - 1);
    std::cout << c << std::endl;
}

struct Point {
    int x;
    int y;

    double distance(const Point& p) const {
        return sqrt((x - p.x) * (x - p.x) + (y - p.y) * (y - p.y));
    }
};

double distance(const Point& p1, const Point& p2) {
    return sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
}

struct Line {
    Point p1;
    Point p2;

    double length() const {
        return p1.distance(p2);
    }

    bool equal(const Line& l) const {
        return l.length() == length();
    }

    void printInfo() const {
        std::cout << "P1 (" << p1.x << ", " << p1.y << "), ";
        std::cout << "P2 (" << p2.x << ", " << p2.y << ") - ";
        std::cout << p1.distance(p2) << std::endl;
    }

};

struct Triangle
{
    Line l1;
    Line l2;
    Line l3;

    bool isTriangle() const
    {
        return (l1.length() < l2.length() + l3.length() && l2.length() < l1.length() + l3.length() && l3.length() < l1.length() + l2.length());  
    }

    double perimeter() const
    {
        return l1.length()+l2.length()+l3.length();
    }

    double area() const
    {
        double p = perimeter() / 2;
        return sqrt(p * (p - l1.length()) * (p - l2.length()) * (p - l3.length()));
    }

    void printInf()
    {
        l1.printInfo();
        l2.printInfo();
        l3.printInfo();
        std::cout<< perimeter() / 2<<std::endl;
        std::cout<<"P = " << perimeter()  << " " << "Area = "<<area()<<std::endl;
    }
};

int main() {

    printLetters('c');

    Point p1{0, 0};
    Point p2{1, 1};

    Point p3{1,1};
    Point p4{2,3};

    Point p5{2,3};
    Point p6{0,0};

    Line l1{p1,p2};
    Line l2{p3,p4};
    Line l3{p5,p6};

    Triangle triangle {l1,l2,l3};

    triangle.printInf();


    double dist1 = p1.distance(p2);
    double dist2 = distance(p1, p2);

    std::cout << dist1 << std::endl;
    std::cout << dist2 << std::endl;


    return 0;
}