#include <iostream>
#include <string>
using namespace std;

int main() {
    string time;  // to store input in HH:MM format

    // Input time
    cout << "Enter time (HH:MM): ";
    cin >> time;

    // Extract hours and minutes using substr
    string hours = time.substr(0, 2);   // first two chars
    string minutes = time.substr(3, 2); // chars at position 3 and 4

    // Display in required format
    cout << "Hours - " << hours << ", Minutes - " << minutes << endl;

    return 0;
}

