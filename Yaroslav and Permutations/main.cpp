#include <iostream>

using namespace std;

int main()

{
    int n,count_big=0,count_temp=0,i,j;
    cin>>n;
    int arr[n];
     for( i=0;i<n;i++)
        cin>>arr[i];
    for( i=0;i<n;i++)
    {
        for( j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
              count_temp++;
        }
         if(i==0)
                count_big=count_temp;
            else
            {
                if(count_temp>count_big)
                   count_big=count_temp;
            }
            count_temp=0;
    }
     if(n>=(2 *count_big)-1)
    cout << "YES" << endl;
    else
    cout << "NO" << endl;
    return 0;
}
