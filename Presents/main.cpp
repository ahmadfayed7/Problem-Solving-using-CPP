#include <iostream>

using namespace std;

int main()
{
    int n,i;
    cin>>n;
    int arr[n];
    int output[n];
    for( i=0 ; i<n;i++)
        cin>>arr[i];
    for( i=0 ; i<n;i++)
    {
        output[arr[i]-1]=i+1;
    }
    for( i=0 ; i<n;i++)
        cout<<output[i]<<" ";

    return 0;
}
