#include <iostream>
using namespace std;

class mystack {
    int top;
    int *arr;
    int capacity;

public:
    mystack(int capacity)
    {
        this->capacity = capacity;
        this->top = -1;
        this->arr = new int[capacity];
    }

    void push(int val)
    {
        if(top == capacity - 1)
        {
            cout << "The stack is full.." << endl;
            return;
        }

        arr[++top] = val;
    }

    int pop()
    {
        if(top == -1)
        {
            cout << "The stack is already empty" << endl;
            return -1;
        }

        return arr[top--];
    }

    int peek()
    {
        if(top == -1)
        {
            cout << "The stack is empty...." << endl;
            return -1;
        }

        return arr[top];
    }

    bool isFull()
    {
        return top == capacity - 1;
    }

    bool isEmpty()
    {
        return top == -1;
    }
};

int main()
{
    mystack s1(10);

    s1.push(10);
    s1.push(20);
    s1.push(30);

    cout << "Top element: " << s1.peek() << endl;
    cout << "Popped: " << s1.pop() << endl;

    return 0;
}