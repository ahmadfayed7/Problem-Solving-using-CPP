// Array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void print_v(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}
int main()
{
    vector<int> v,p,n,z;
    int s, e,c1=0,  c2 = 0,  c3 = 0;
    cin >> s;
    for (int i = 0; i < s; i++)
    {
        cin >> e;
        v.push_back(e);
        if (e < 0) n.push_back(e);
        if (e > 0)p.push_back(e);
        if (e == 0) z.push_back(e);
    }

    if (n.size() % 2 != 0 && p.size() == 0)
    {
        p.push_back(n.back());
        n.pop_back();
        p.push_back(n.back());
        n.pop_back();
    }
     if(n.size() % 2 ==0  && p.size() != 0)
    {
        z.push_back(n.back());
        n.pop_back();
    }
     if (n.size() % 2 == 0 && p.size() == 0)
     {
         z.push_back(n.back());
         n.pop_back();
         p.push_back(n.back());
         n.pop_back();
         p.push_back(n.back());
         n.pop_back();
     }


    cout << n.size() << " ";
    print_v(n);
    cout << endl;
    cout << p.size() << " ";
    print_v(p);
    cout << endl;
    cout << z.size() << " ";
    print_v(z);
   



}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
