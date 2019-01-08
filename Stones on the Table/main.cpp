#include <iostream>

using namespace std;

int main()
{    int n;
     char last;
     int count_element=0;
     int count_final=0;
     cin>>n;
     char arr[n];
     for(int i=0;i<n;i++)
     {
         cin>>arr[i];
         if(i==0)
         {
             last=arr[i];
             count_element++;
         }
         else
         {
                if(last==arr[i])
                 count_element++;

         }
         last=arr[i];
     }
     if(count_element>0)
     count_final +=count_element-1;
    cout << count_final << endl;
    return 0;
}
