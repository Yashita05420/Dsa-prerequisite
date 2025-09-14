#include <iostream>
using namespace std;
int main()
{
      int age;
      cout << "Enter age: ";
      cin >> age;

      if (age < 13)
            cout << "Child" << endl;
      else if (age >= 13 && age <= 19)
            cout << "Teenager" << endl;
      else if (age >= 20 && age <= 59)
            cout << "Adult" << endl;
      else
            cout << "Senior" << endl;

      return 0;
}
