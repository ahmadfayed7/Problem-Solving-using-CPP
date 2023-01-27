// Implement Queue using Stacks.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <queue>
#include <stack>
using namespace std;
class MyQueue{
private:
    stack<int> s1 ,s2;
public:
    MyQueue() {

    }

    void push(int x) {
        s1.push(x);
    }

    int pop() {
        if (s2.size() == 0)
        {
            while (s1.size())
            {
                
                s2.push(s1.top());
                s1.pop();
            }
            int t = s2.top();
            s2.pop();
            return t;
        }
        else
        {
            int t = s2.top();
            s2.pop();
              return t;
        }
    }

    int peek() {
        if (s2.size() == 0)
        {
            while(s1.size())
            {
                s2.push(s1.top());
                s1.pop();
            }
          
            return s2.top();
        }
        else
        {
            return s2.top();
        }

    }

    bool empty() {
        return s1.empty() && s2.empty();
    }
};

int main()
{
    MyQueue myQueue;
    int q,n,e;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        cin >> n;
        switch (n)
        {
        case 1: cin >> e; myQueue.push(e); break;
        case 2:myQueue.pop(); break;
        case 3: cout<<myQueue.peek()<<endl; break;
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
