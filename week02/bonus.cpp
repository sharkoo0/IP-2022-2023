#include <iostream>
#include <cmath>

using std::cin;
using std::cout;


int main() {
    int x1, y1, r1,
        x2, y2, r2;

    int larger_radius  = (r1 > r2) ? r1 : r2;
    int smaller_radius = (r1 < r2) ? r1 : r2;

    int distance = sqrt( (x1 - x2) * (x1 - x2)  + (y1 - y2) * (y1 - y2) );

    if (distance > r1 + r2)
    {
        cout << "Not overlapping";
    }
    else if (distance == r1 + r2)
    {
        cout << "Touching";
    }
    else if (distance < r1 + r2)
    {

        cout << "Overlapping";
    }

    return 0;
}