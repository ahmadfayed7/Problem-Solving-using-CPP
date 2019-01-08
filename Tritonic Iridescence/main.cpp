#include <iostream>

using namespace std;

int main()
{
    int n,i;
    cin>>n;
    char last_color,front_color;
    char arr[n];
    bool valid=true;
    int counter=0;
    int flag=0;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++)
    {
         if(n==1&&arr[0]!='?')// one element
         {
           valid=false;
           break;
         }

         if((i-1) >=0 && (i+1) <n &&arr[i]=='?')   // CC?YY
         {

           if(arr[i-1] != arr[i+1] && arr[i-1]!='?'&&arr[i+1]!='?')
            {
                         valid=false;
                         flag ++;

            }
         }


        if((i+1) <n && arr[i]==arr[i+1]&&arr[i]!='?')
                valid=false;



    }

    for(int i=0;i<n;i++)
    {
        if(arr[i]=='?')
            counter++;
    }
    if(counter==0)
        valid=false;
    if(counter>1 && flag>0)
        valid=true;
    if(counter==flag)
         valid=false;
    if(valid)
    cout << "YES" << endl;
    else
    cout << "NO" << endl;

    return 0;
}
