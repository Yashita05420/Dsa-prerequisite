#include <iostream>
using namespace std;
int main()
{
      float cpDozen, spDozen;
      cout << "Enter Cost Price per dozen: ";
      cin >> cpDozen;
      cout << "Enter Selling Price per dozen: ";
      cin >> spDozen;

      float cpBanana = cpDozen / 12;
      float spBanana = spDozen / 12;

      float totalCP = cpBanana * 25;
      float totalSP = spBanana * 25;

      if (totalSP > totalCP)
            cout << "Profit = " << totalSP - totalCP << endl;
      else if (totalSP < totalCP)
            cout << "Loss = " << totalCP - totalSP << endl;
      else
            cout << "No Profit No Loss" << endl;

      return 0;
}
