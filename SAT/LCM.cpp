#include <iostream>
using namespace std;
int main()
{
      int a, b, lcm;
      cout << "Enter two numbers: ";
      cin >> a >> b;

      int maxVal = (a > b) ? a : b;
      lcm = maxVal;

      while (true)
      {
            if (lcm % a == 0 && lcm % b == 0)
            {
                  cout << "LCM = " << lcm << endl;
                  break;
            }
            lcm++;
      }

      return 0;
}
