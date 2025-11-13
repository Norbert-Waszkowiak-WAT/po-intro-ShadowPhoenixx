#include <iostream>
using namespace std;
class Point {
public:
int x, y;
    void print() {  
    cout << "Point(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Point p1;
    p1.x = 1;
    p1.y = 2;
    p1.print();
    Point p2;
    p2.x = 6;
    p2.y = 7;
    p2.print();
}
# g++ main.cpp -o main
# ./main
