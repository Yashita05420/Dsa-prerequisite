#include <iostream>
using namespace std;

int main() {
    double radius, circumference;  // use double to handle decimal results
    const double PI = 3.14159; //using const so that we can't modify its value by mistake 

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    circumference = 2 * PI * radius;

    cout << "Circumference of the circle = " << circumference << endl;

    return 0;
}

