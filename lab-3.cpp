#include <iostream>
#include <cmath>
using namespace std;
int func( int n, int massa[], int i = 0, int sum_1 = 0, int sum_2 = 0)
{
   if (i == n)
      return abs( sum_1 - sum_2 );
   else
      {
         return min(
            func(n, massa, i + 1, sum_1 + massa[i], sum_2 ),
            func(n, massa, i + 1, sum_1, sum_2 + massa[i] )
            );
      }
      
}

int main()
{
   int n;
   cin >> n; int plates[n];
   for (int i = 0; i < n; ++i){
      cin >> plates[i];
   }
   cout << func(n, plates);
   return 0;
}
