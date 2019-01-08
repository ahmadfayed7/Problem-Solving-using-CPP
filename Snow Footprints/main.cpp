#include <iostream>

using namespace std;

int main()
{
    int n,i;
    int s=0,t=0;
    cin>>n;
    char arr[n];
    for( i=0;i<n;i++)
        cin>>arr[i];
    for( i=0;i<n;i++)
    {
        if(arr[i]=='R'&&arr[i-1]=='.')
        {
           s=i+1;
        }
        if(arr[i]=='.'&&arr[i-1]=='L')
        {
           s=i;
           break;
        }
           if(arr[i]=='R'&&arr[i+1]=='.')
        {
           t=i+2;
           break;
        }
        if(arr[i]=='L'&&arr[i-1]=='.')
        {

              t=i;


        }
        if(arr[i]=='R'&&arr[i+1]=='L')
        {
           t=i+1;
           break;
        }


    }

    cout <<s<<"  "<<t << endl;
    return 0;
}
