// Gravity Flip.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;
int Gravity_Flip(vector<int> & v)
{
    int move_indicator = 0 ,d;
    for (int i = 0; i <v.size()-1; i++)
    {
        if (v[i + 1] < v[i])
        {
            d = v[i] - v[i + 1];
            v[i + 1] += d;
            v[i] -= d;
            move_indicator = 1;
        }
    }
    return move_indicator;
}

int main()
{
    int n ,e, move_indicator;
    vector<int> v;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> e;
        v.push_back(e);
    }
    move_indicator = Gravity_Flip(v);
    while (move_indicator != 0)
    {
        move_indicator = Gravity_Flip(v);
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
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
