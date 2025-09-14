#include <iostream>
using namespace std;
int main()
{
      int start, end;
      cout << "Enter start year and end year: ";
      cin >> start >> end;

      cout << "Leap years between " << start << " and " << end << ":" << endl;
      for (int year = start; year <= end; year++)
      {
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
                  cout << year << " ";
      }
      cout << endl;

      return 0;
}
