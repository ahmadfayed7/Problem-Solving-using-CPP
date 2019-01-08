#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a1;
    string a2;
    char current;
    char current_index=0;
    int moves=1;
    cin>>a1;
    current=a1[0];
    cin>>a2;
    for(int i=0 ;i<a2.length();i++)
    {
        if(a2[i]==current)
        {
            if(moves <a1.length())
            {
              moves++;
              current_index++;
              current=a1[current_index];
            }

        }

    }
    cout << current_index+1<< endl;
    return 0;
}
