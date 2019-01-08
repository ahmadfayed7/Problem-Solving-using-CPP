#include <iostream>
#include<stdio.h>
using namespace std;

int main()
{
        int n;
    long long p= 1,res= 0;

    cin>>n;

    while(n > 0){
        if(n%10 == 7){
            res += p*2;
        }
        else{
            res += p*1;
        }

        n /= 10;
        p *= 2;
    }

cout<< res <<endl;
    return 0;
}
