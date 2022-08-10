#include <iostream>

using namespace std;

struct Node 
{
    int data;
    Node *next;
};

Node *Top = NULL;

bool isEmpty()
{
    if (Top == NULL) 
        return true;
    return false;
}

void printStck()
{
    Node *ptrTmp = Top;
    if (isEmpty())
    {
        cout << "Stack is empty!" << endl;
    }
    else
    {
        while (ptrTmp != NULL)
        {
            cout << ptrTmp->data << endl;
            ptrTmp = ptrTmp->next;
        }
    }
}

void push(int i_Data)
{
    Node *ptrNode = new Node;
    ptrNode->data = i_Data;
    ptrNode->next = Top;
    Top = ptrNode;
}

void pop()
{
    Node *ptrTmp = Top;
    if (isEmpty())
    {
        cout << "Stack is empty!" << endl;
    }
    else
    {
        //cout << ptrTmp->data << endl;
        Top = ptrTmp->next;
        delete ptrTmp;
    } 
}

void peek()
{
    if (isEmpty())
    {
        cout << "Stack is empty!" << endl;
    }
    else
    {
        cout << Top->data << endl;
    } 
}

int main() {
    /*
    Basic functions =>
    push(item) - adds an item to a stack
    pop() - extracts the most recently pushed item from the stack
    peek() - returns the item at the top without removing it
    isEmpty() - determines whether the stack has anything in it
    
    extra functions =>
    printStck();
    */
    push(3);
    push(2);
    push(1);
    printStck();
    pop();
    pop();
    printStck();
    pop();
    peek();
}