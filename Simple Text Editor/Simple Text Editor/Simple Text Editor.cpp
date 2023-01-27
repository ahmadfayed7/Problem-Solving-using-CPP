// Simple Text Editor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <stack>
using namespace std;
class editor {

private :
    stack<string> s;
    
public:
    editor()  {}
   void editor_append(string a) {
       if (s.size() == 0)
       {
           s.push(a);
       }
       else
       {
           string t = s.top();
           t += a;
           s.push(t);

       }
    }
   void editor_delete(int k)
   {
       string t = s.top();
       for (int i = 0; i < k; i++)
       {
           t.pop_back();
       }
       s.push(t);
   }
   void editor_print(int k)
   {
       string t = s.top();
       cout << t[k-1]<<endl;
   }
   void editor_undo()
   {
       s.pop();
   }
};
int main()
{
    int q,n,k;
    string s;
    editor e;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> n;
        switch (n)
        {
        case 1: cin >> s; e.editor_append(s); break;
        case 2: cin >> k; e.editor_delete(k); break;
        case 3: cin >> k; e.editor_print(k); break;
        case 4:  e.editor_undo(); break;
        default: break;
        }
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
