# france_ioi
#include <iostream>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
using namespace std;
int main()
{
   int j=1;
   repeat(20)
   {
     int i=1;
     repeat(20)
     
     {
        cout << i*j<<" ";
        i++;
     }
     j++;
     cout <<endl;
  }
}
