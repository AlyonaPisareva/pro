#include <iostream>;
using namespace std;


int main() 
{
unsigned long c = 1;


int n;
cin >> n;


int** a = new int*[n];
for (int i = 0; i < n; i++) a[i] = new int[2];


for (int i = 0; i < n; i++) cin >> a[i][0] >> a[i][1];


for (int i = 0; i <n; i++) 
{
   if ( a[i][1]<=a[i][0]) c*=0;
   else {
if (a[i][0] >= 0) c *= a[i][1] - a[i][0] + 1;
else 
{
if (a[i][1] >= a[-a[i][0]-1][1] )
{
c *= a[i][1] -a[i][0];
c /= 2;
}
else
{
c *= 0;
break;
}
}
   }
}
  c=c%4294967296;
cout << c << endl;
} 