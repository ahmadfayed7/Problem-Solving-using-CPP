#include <iostream>

using namespace std;

int main()
{
    int nu_police=0;
    int nu_untreated=0;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0 ;i<n;i++)
    {
     cin>>arr[i];
     if(arr[i]>0)
     {
        nu_police+=arr[i];
     }
     else
     {
         if(nu_police==0)
            nu_untreated++;
         else
            nu_police--;

     }
    }
    cout <<nu_untreated << endl;
    return 0;
}
