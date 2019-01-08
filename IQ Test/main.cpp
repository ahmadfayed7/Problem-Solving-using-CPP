#include <iostream>

using namespace std;
char input[4][4];
bool test (int i,int j)
{   if (i+1 ==4 || j+1==4)
      return false;
    return input[i][j]==input[i+1][j] && input[i][j]==input[i][j+1] &&input[i][j]==input[i+1][j+1];
}
bool  test ()
{
    int i,j;

   for(i=0;i<4;i++)
   {
        for(j=0;j<4;j++)
           if(test(i,j))
            return true;
   }
   return false ;
}

int main()
{   int i,j;
    bool ans;
    char orignal;
   for(i=0;i<4;i++)
   {
        for(j=0;j<4;j++)
            cin>>input[i][j];
   }
    ans=test();
    for(i=0;i<4;i++)
   {
        for(j=0;j<4;j++)
           {   orignal= input[i][j];
               //flip
               if(input[i][j]=='.')
                input[i][j]='#';
               else
                input[i][j]='.';
               if(test())
                ans=true;
               input[i][j]=orignal;
           }
   }
   if(ans==true)
   cout<<"YES";
   else
    cout<<"NO";

    return 0;
}
