#include <iostream>

using namespace std;

int main()
{   int n,i,j,k=0,s=1,count_1=0,count_2=0,count_3=0,w;
    cin>>n;
    int arr[n];
    int out[3];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==1)
            count_1++;
        else if(arr[i]==2)
            count_2++;
        else
            count_3++;
    }
    w=count_1;
    if(count_2<w)
        w=count_2;
    if(count_3<w)
        w=count_3;
    cout<<w<<endl;
    for(i=0;i<w;i++)
    {
        for( j=0;j<n;)
        {

        if(arr[j]==s)
        {
            out[k]=j+1;
            k++;
            s++;
            arr[j]=0;
              j=0;
        if(k==3 )
        {
           cout<<out[0]<<" "<<out[1]<<" "<<out[2]<<endl;
           s=1;
           k=0;
           break;
        }
        }
        else
            j++;
        }
    }
    return 0;
}
