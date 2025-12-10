#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node * next;

    Node(int val)
    {
        this->data=val;
        next=nullptr;
    }
};

class LinkedList{
    private:
    Node * head;
    public:
    LinkedList()
    {
        head=nullptr;
    }


    void insertAtBegining(int val)
    {
        Node* newNode=new Node(val);

        if(head==nullptr)
        {
            head=newNode;
            return;
        }

        newNode->next=head;
        head=newNode;
    }


    void printList()
    {
        Node * temp=head;

        while(temp!=nullptr)
        {
            cout<<temp->data<<endl;
            temp=temp->next;
        }

    }

    void insertAtend(int val)
    {
        Node * newNode=new Node(val);
        Node * temp=head;
        if(head==nullptr)
        {
          head=newNode;
          return;
        }

        while(temp->next!=nullptr)
        {
            temp=temp->next;

        }

        temp->next=newNode;

    }
};



int main()
{
    LinkedList l1;

    l1.insertAtBegining(6);
    l1.insertAtBegining(5);
    l1.insertAtBegining(4);
    l1.insertAtBegining(3);
    l1.insertAtBegining(2);
    l1.insertAtBegining(1);

    l1.insertAtend(7);
    l1.insertAtend(8);
    l1.insertAtend(9);
    l1.insertAtend(10);

    l1.printList();

}