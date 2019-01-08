#include <iostream>

using namespace std;

int main()
{  int n,f,a,b,i,flag=0;
    cin>>n;
    cin>>f;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        if((a==f)||(a==(7-f))||((7-a)==f)||((7-a)==(7-f)))
        {
            flag=1;

        }
        if((b==f)||(b==(7-f))||((7-b)==f)||((7-b)==(7-f)))
        {
            flag=1;
        }
    }
    if(flag==0)
    cout << "YES" << endl;
    else
    cout << "NO" << endl;
    return 0;
}
