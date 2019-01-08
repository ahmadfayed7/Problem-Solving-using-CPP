#include <iostream>

using namespace std;

int main()
{
    long long n,k,num,mid;
    cin>>n>>k;
    if(n%2>0)
    {
        mid=(n/2)+1;
    }
    else
    {
        mid=n/2;
    }
    if(k<=mid)
    {
        num=(k*2)-1;
    }
    else
    {
        k=k-mid;
         num=(k*2);
    }
    cout << num << endl;
    return 0;
}
