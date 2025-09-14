#include <iostream>
using namespace std;
int main()
{
      char choice;
      double temp, converted;

      cout << "Enter F to convert Fahrenheit to Celsius, C for Celsius to Fahrenheit: ";
      cin >> choice;

      if (choice == 'F' || choice == 'f')
      {
            cout << "Enter temperature in Fahrenheit: ";
            cin >> temp;
            converted = (temp - 32) * 5.0 / 9.0;
            cout << "Celsius = " << converted << endl;
      }
      else if (choice == 'C' || choice == 'c')
      {
            cout << "Enter temperature in Celsius: ";
            cin >> temp;
            converted = (temp * 9.0 / 5.0) + 32;
            cout << "Fahrenheit = " << converted << endl;
      }
      else
      {
            cout << "Invalid choice!" << endl;
      }

      return 0;
}
