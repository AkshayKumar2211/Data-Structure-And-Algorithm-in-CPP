#include<iostream>
class Node{
    public:
        
     int data;
     Node* next;

     Node(int data)
     {
        this->data=data;
        next=nullptr;
     }


};

class stack{
    Node* top;
    
    public:
    stack()
    {
        top=nullptr;
    }

    void push(int value)   //Push function in the stack 
    {
        Node* newNode=new Node(value);

        if(top==nullptr)
        {
            top=newNode;
            return;
        }

        newNode->next=top;
        top=newNode;

    }

    void pop()    //pop function in the stack
    {
        if(top==nullptr)
        return;
        
        Node* temp=top;
        top=top->next;

        delete(temp);
    }

    void print()  //print all the element in the stack
    {
        Node * temp=top;

        while(temp!=nullptr)
        {
            std::cout<<temp->data<<std::endl;
            temp=temp->next;
        }
    }

    void topElement()
    {
        if(top==nullptr)
        {
            std::cout<<"The stack is empty";
        }

        std::cout<<top->data<<std::endl;
    }
};


int main(){

    stack s1;
    s1.push(15);
    s1.push(10);
    s1.push(25);

    s1.pop();
    s1.print();

    s1.topElement();
}