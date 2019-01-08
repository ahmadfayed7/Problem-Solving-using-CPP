#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{

      string word;
      cin>>word;
      int current=0;
      int moves=0;
      int m;
      int ch_nu;
      int length= word.length();
      for(int i=0 ;i<length;i++)
      {
         ch_nu=word[i]-97;
         m =abs(ch_nu-current);
         if( m<13)
            {
               moves +=m;;
            }

         else
            {
               moves += 26-m;
            }
            current=ch_nu;

      }

  cout<<moves;
    return 0;
}
