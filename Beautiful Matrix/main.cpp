#include <iostream>

using namespace std;

int main()
{
    int x=0,y=0;
    int moves=0;
    int arr[5];
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
          cin>>arr[j];
          if(arr[j]==1)
            {
                x=j;
                y=i;
            }
        }
    }
    while(x!=2)
    {
     if(x>2)
        x--;
     else
        x++;
     moves++;
    }
    while(y!=2)
    {
     if(y>2)
        y--;
     else
        y++;
     moves++;
    }
    cout<<moves<<endl;
    return 0;
}
