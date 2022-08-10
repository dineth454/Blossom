#include <iostream>
#include <stack>

using namespace std;

int main() 
{
    stack<int> stk;
    stk.push(10);
    stk.push(11);
    stk.push(12);
    stk.push(13);
    stk.push(14);
    stk.push(15);
    
    stk.pop();
    
    while (!stk.empty())
    {
        cout << stk.top() << " ";
        stk.pop();
    }
}