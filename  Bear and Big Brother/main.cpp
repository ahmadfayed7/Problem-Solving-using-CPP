#include <iostream>

using namespace std;
 int calculate_years(int a,int b)
 {
     int y=0;
     while(a<b || a==b)
     {

         a=a*3;
         b=b*2;
         y++;
     }
     return y;
 }
int main()
{  int a, b,years ;
   cin>>a;
   cin>>b;
  years = calculate_years(a,b);
    cout << years << endl;
    return 0;
}
