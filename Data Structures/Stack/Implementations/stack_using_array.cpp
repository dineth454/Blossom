#include <iostream>

using namespace std;

#define STK_SIZE 5
class Stck
{
    private:
    static int iTop;
    static string arrStack[STK_SIZE];
    
    public:
    bool isEmpty()
    {
        if (iTop == -1)
            return true;
            
        return false;
    }
    
    void push(string s_Item)
    {
        if (iTop <= STK_SIZE - 1)
        {
            iTop++;
            arrStack[iTop] = s_Item;
        }
        else
        {
            cout << "Stack is full!" << endl;
        }
    }
    
    string pop()
    {
        string sTmp = "";
        if (!isEmpty())
        {
            sTmp = arrStack[iTop];
            iTop--;
        }
        else
        {
            cout << "Stack is empty!" << endl;
        }
        return sTmp;
    }
    
    string peek()
    {
        string sTmp = "";
        if (!isEmpty())
        {
            sTmp = arrStack[iTop];
        }
        else
        {
            cout << "Stack is empty!" << endl;
        }
        return sTmp;
    }
    
    void printStck()
    {
        if (!isEmpty())
        {
            for (int i = 0; i <= iTop; i++)
            {
                cout << arrStack[i] << endl;
            }
        }
        else
        {
            cout << "Stack is empty!" << endl;
        }
    }
};

int Stck::iTop = -1;
string Stck::arrStack[STK_SIZE];

int main() 
{
    /*
    Basic functions =>
    push(item) - adds an item to a stack
    pop() - extracts the most recently pushed item from the stack
    peek() - returns the item at the top without removing it
    isEmpty() - determines whether the stack has anything in it
    
    extra functions =>
    printStck();
    */
    
    Stck mMyStack;
    mMyStack.push("D");
    mMyStack.push("i");
    mMyStack.push("n");
    mMyStack.pop();
    cout << "Top is " << mMyStack.peek() << endl;
    mMyStack.printStck();
    
}