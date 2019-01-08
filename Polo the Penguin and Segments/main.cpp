#include <iostream>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int x1,x2;
    int set_wide=0;
    int nu_moves=0;
    for(int i=0;i<n;i++)
    {
        cin>>x1>>x2;
        set_wide+=x2-x1+1;
    }
    while(set_wide%k>0)
    {
        nu_moves++;
        set_wide++;
    }
    cout <<nu_moves << endl;
    return 0;
}
