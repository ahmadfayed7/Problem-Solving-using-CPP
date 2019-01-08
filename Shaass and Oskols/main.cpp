#include <iostream>

using namespace std;

int main()
{
    int n ,m;
    int i,x,y;
    cin>>n;
    int arr[n];
    for( i=0;i<n;i++)
        cin>>arr[i];

    cin>>m;
    for( i=0;i<m;i++)
    {
        cin>>x>>y;
        if(x==n)
          arr[x-1] -=arr[x-1]-y;
        else
          arr[x] +=arr[x-1]-y;
        if(x-2<0)
          arr[x-1] -=y-1;
        else
          arr[x-2]+=y-1;
        arr[x-1]=0;

    }
    for( i=0;i<n;i++)
    {
       cout << arr[i]<< endl;
    }

    return 0;
}
