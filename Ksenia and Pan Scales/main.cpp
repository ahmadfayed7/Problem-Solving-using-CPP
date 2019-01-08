#include <iostream>
#include <string>
using namespace std;

int main()
{
    string t1;
    string t2;

    int e=0,e1=0,R,L,i;
    cin>>t1;
    cin>>t2;
    string LS,RS;
    char delimiter='|';
    if(t1[0]=='|')
    {
       LS="";
      RS= t1.substr(1,t1.length());
    }
    else
    {
       LS = t1.substr(0,t1.find(delimiter));
     RS= t1.substr(LS.length()+1,t1.length());
    }
     R=RS.length();
    L=LS.length();


    for(i=0;i<t2.length();i++)
        e++;

    if(L<R)
    {
        if(R-L>e)
            cout<<"Impossible"<<endl;
        else
        {

            LS.append(t2.substr(0,R-L));
            e-=R-L;
            e1 +=R-L;
            L=R;

        }
    }
    else if(R<L)
    {
        if(L-R>e)
            cout<<"Impossible"<<endl;
        else
        {

            RS.append(t2.substr(0,L-R));
            e-=L-R;
            e1+=L-R;
            R=L;

        }
    }

    if(R==L)
    {
        if(e%2!=0)
            cout<<"Impossible"<<endl;
        else
        {   LS.append(t2.substr(e1,(e/2)));
            RS.append(t2.substr(e1+(e/2),e/2));
             cout<<LS<<'|'<<RS;
        }
    }

}
