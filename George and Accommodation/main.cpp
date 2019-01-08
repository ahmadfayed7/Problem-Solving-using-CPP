#include <iostream>

using namespace std;

int main()
{
    int nu_rooms;
    int empty_rooms=0;
    cin>>nu_rooms;
    int p,q;
    for(int i=0;i<nu_rooms;i++)
    {
      cin>>p>>q;
      if(q-p>=2)
        empty_rooms++;
    }
    cout << empty_rooms << endl;
    return 0;
}
