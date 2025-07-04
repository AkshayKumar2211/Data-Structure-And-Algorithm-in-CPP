#include<iostream>
class Node{
    public:
    int data;
    Node* next;

    Node(int val)
    {
        data=val;
        next=nullptr;
    }
};

class LinkedList{
 
Node* head;

public:
LinkedList()
{
    head=nullptr;
}

void insertAtBegining(int data)  // to insert an element in the begining of linked list
{
    Node * newNode=new Node(data);

    if(head==nullptr)
    {
        head=newNode;
        return;
    }

    newNode->next=head;
    head=newNode;


}

void printList()  // to print all the linked list;
{
    Node* temp=head;

    while(temp!=nullptr)
    {
        std::cout<< temp->data<<std::endl;
        temp=temp->next;
    }

}

void insertAtEnd(int data){  // This will insert a node at the end of the linked list
    Node* temp=head;

    Node* newNode=new Node(data);

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

void deleteAtBegining()  //By this we will delete the node at the Begining. 
{
    Node* temp=head;

    if(head==nullptr) return;

    head=head->next;

    delete(temp);
}

void deleteAtEnd() // By this we will delete the node at the End.
{
    Node* temp=head;

    if(head==nullptr) 
    return;

     if (head->next == nullptr) // Only one node in the list to delete it.
    {
        delete head;
        head = nullptr;
        return;
    }


    while(temp->next->next!=nullptr)
    {
        temp=temp->next;
    }

    delete temp->next;

    temp->next=nullptr;

     
}
};




int main()
{
    LinkedList l1;

    l1.insertAtBegining(25);
    l1.insertAtBegining(10);

    l1.insertAtEnd(55);
    l1.insertAtEnd(46);
    l1.insertAtEnd(60);

    l1.deleteAtBegining();
    l1.deleteAtEnd();

    l1.printList();
}