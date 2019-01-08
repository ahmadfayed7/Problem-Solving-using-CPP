#include <iostream>

using namespace std;

int main()
{
    int x;
    cin>>x;
    int r=0;
    while(x>0)
    {  if(x%2==1)
        r++;
        x=x/2;
    }

    cout << r<< endl;
    return 0;
}
