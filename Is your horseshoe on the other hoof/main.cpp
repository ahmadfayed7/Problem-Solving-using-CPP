#include <iostream>

using namespace std;
int s[4];
long Rcount[4];
int calculate_count (int s1)
{
  int index =0;
  for(int i=0 ;i<4 ;i++)
  {
      if(s1==s[i])
      {
       index++;
      }
  }

  return index;
}
int find_max_count()
{
int max1 = Rcount[0];
  for(int i=1 ;i<4 ;i++)
  {
      if(max1<Rcount[i])
      {
       max1=Rcount[i];
      }
  }
  return max1;
}
int main()
{
    int i;
    int maxc,ans;
    for( i=0;i<4;i++)
    {
       cin>>s[i];
    }
    for(i=0;i<4;i++)
    {
         Rcount[i]=calculate_count(s[i]);
    }

       maxc= find_max_count();

    if(Rcount[0]==Rcount[1]&&Rcount[1]==Rcount[2]&&Rcount[0]==2)
      ans= 2;
    else
      ans = maxc-1;
    cout << ans << endl;
    return 0;
}
