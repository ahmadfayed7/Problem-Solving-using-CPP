#include <iostream>
#include <algorithm>
using namespace std;

int main()
{   int w,y,r;
    cin>>w>>y;
    if(w>y)
        r=6-w+1;
    else
        r=6-y+1;
    cout << r/__gcd(r,6)<<"/" << 6/__gcd(r,6)<< endl;
    return 0;
}
