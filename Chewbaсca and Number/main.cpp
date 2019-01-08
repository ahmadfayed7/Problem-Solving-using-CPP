#include <iostream>
#include <string>
using namespace std;

int main()
{
  string s;
  cin>>s;
  int i;
  for( i=0;i<s.length();i++)
  {
    if(s[i]>4)
    {
        int x =s[i]-'0';
        if(x>=5 )
        {
           x= 9-x;
           if(!(x==0&&i==0))
            s[i]=x+'0';
        }

    }

  }
    cout << s<< endl;
    return 0;
}
