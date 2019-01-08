#include <iostream>

using namespace std;

int main()
{
    int n,i;
    cin>>n;
    int r;
    int time,smallest=0;
    char arr1[n];
    int arr2[n];
    for(i=0;i<n;i++)
        cin>>arr1[i];
    for(i=0;i<n;i++)
        cin>>arr2[i];
    for(i=0;i<n;i++)
    {  if(i+1<n)
       {
        if(arr1[i]=='R' && arr1[i+1]=='L')
        {
              r=(arr2[i+1]-arr2[i])/2;
              time = r;
              if(smallest==0)
                smallest=time;
             if(time<smallest )
             smallest=time;
        }

       }

    }
    if(smallest==0)
    cout <<-1 << endl;
    else
    cout << smallest << endl;
    return 0;
}
