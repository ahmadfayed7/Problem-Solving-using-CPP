#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int n,k,i;
     cin>>n>>k;
     int arr[2*n+1];
     for(i=0;i<2*n+1;i++)
        cin>>arr[i];
     for(i=0;i<2*n+1;i++)
     {
         if(k&&i%2==1&&arr[i]>arr[i-1]+1&&arr[i]>arr[i+1]+1)
         {
             k--;
             cout<<arr[i]-1<<" ";
         }
         else
         {
            cout<<arr[i]<<" ";
         }
     }
    return 0;
}
