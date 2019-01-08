#include <iostream>

using namespace std;

int main()
{
    int l,r,e;
    cin>>l>>r>>e;
   while(l<r)
   {
    if(e>0)
    {
        l++;
        e--;
    }
    if(e==0)
    {
        while(l<r)
        {
            r--;
        }
        break;
    }

   }
   while(r<l)
   {
     if(e>0)
    {
        r++;
        e--;
    }
    if(e==0)
    {
        while(r<l)
        {
            l--;
        }
        break;
    }
   }
   if(r==l)
   {
     if(e>1)
     {
         r+=e/2;
         l+=e/2;
     }
   }
    if(l==r)
    cout <<l+r << endl;
    else
    cout<<0<< endl;
    return 0;
}
