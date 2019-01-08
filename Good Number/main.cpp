#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n,k,r=-1;
    int count_dig=0,count_num=0;
    cin>>n>>k;
    string t="0123456789";
    string s;
    for(int i=0 ;i<n;i++)
    {
        cin>>s;
        for(int j=0;j<=k;j++)
        {

            if(s.find(t[j])!=-1)
            {
                count_dig++;
            }

        }
        if(count_dig>=k+1)
            count_num++;
        count_dig=0;

    }
    cout << count_num << endl;
    return 0;
}
