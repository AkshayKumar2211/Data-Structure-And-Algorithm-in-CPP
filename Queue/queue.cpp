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

class Queue{
Node* front;
Node* back;
public:
Queue()
{
    front=nullptr;
    back=nullptr;
}

void enqueue(int val){
Node* newNode=new Node(val);
 if(front==nullptr)
 {
    front=newNode;
    back=newNode;
    return;

 }
  back->next=newNode;
  back=newNode;
}

void dequeue()
{
     Node* temp;
    if(front==nullptr)
    {
        std::cout<<"Queue is empty"<<std::endl;
        return;
    }

    if(front==back)
    {
        std::cout<<"Their is only one element in queue "<<std::endl;
        temp=front;
        front=nullptr;
        back=nullptr;
        delete(temp);
        return ;
    }
    temp=front;
    front=front->next;
    delete(temp);
}

void getFront()
{
    if(front==nullptr)
    {
        std::cout<<"The queue is empty"<<std::endl;
        return;
    }

    std::cout<<"The first element is :";std::cout<<front->data<<std::endl;
}

void getLast(){
    if(back==nullptr)
    {
        std::cout<<"The queue is empty"<<std::endl;
        return;

    }

    std::cout<<"The last element is :";std::cout<< back->data<<std::endl;
}

void printQueue(){
    Node* temp=front;

    if(front==nullptr) return;

    while(temp!=nullptr)
    {
        std::cout<<temp->data<<std::endl;
        temp=temp->next;
    }

}

};
int main(){

    Queue q1;

    q1.enqueue(56);
    q1.enqueue(23);
    q1.enqueue(45);
    q1.enqueue(65);
    q1.enqueue(79);

    q1.getFront();
    q1.getLast();

    q1.printQueue();


}