#include <iostream>

using namespace std;

int main()
{   int n;
    int count1 =0 ;
    int count2=0;
    cin>>n;
    int arr [n][3];
    for(int i=0; i<n;i++)
    {   count1 =0;
        for(int j=0 ;j<3;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]>0)
                count1++;
        }
        if (count1>=2)
            count2++;
    }
    cout << count2 << endl;
    return 0;
}
