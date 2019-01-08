#include <iostream>
#include <algorithm>
using namespace std;

int main()
{ int a,b,c,d,x1,x2;
   cin>>a>>b>>c>>d;
   x1=a*d-c*b;
   x2=c*b-d*a;

    if (x1 > 0)
      cout<<x1/__gcd(x1,a*d)<<"/"<<a*d/__gcd(x1,a*d);
   else
      cout<<x2/__gcd(x2,c*b)<<"/"<<c*b/__gcd(x2,c*b);
    return 0;
}
