#include <iostream>
#include <string>
#include <cmath>
#include <stdio.h>
using namespace std;
int factorial(int n)
{
    if(n>1)
        return n*factorial(n-1);
    else
        return 1;

}
int combinations(int n, int r)
{
   return  factorial(n)/(factorial(r)*factorial(n-r));
}

int main()
{
    int count_dizal=0,count_dimaron=0,count_dimaron_temp=0,count_q=0,count_q_temp=0,states=0,i;
    string s1,s2;
    cin>>s1;
    cin>>s2;
    for(i=0;i<s1.length();i++)
    {
        if(s1[i]=='+')
            count_dizal++;
        else
            count_dizal--;
    }
    for(i=0;i<s2.length();i++)
    {
       if(s2[i]=='+')
        count_dimaron++;
       else if(s2[i]=='-')
        count_dimaron--;
       else
        count_q++;
    }
    count_q_temp=count_q;
    count_dimaron_temp=count_dimaron;
    for(i=0;i<count_q+1;i++)
    {
        count_dimaron_temp += count_q_temp;
        if(count_dimaron_temp==count_dizal)
        {

            states += combinations(count_q,i);

        }
        count_dimaron_temp=count_dimaron;
        count_q_temp -=2;
    }
     double result =(double)states/(double)pow(2,count_q);
   //cout<<result ;
   printf("%0.12f",result);
    return 0;
}
