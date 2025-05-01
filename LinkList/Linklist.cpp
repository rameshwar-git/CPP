#include<iostream>
#include<stdlib.h>
struct node{
        struct node* prev, *next;
        int data;
    };
    typedef struct node NODE;

class Linklist{
public:
    NODE *head=nullptr, *tail=nullptr;

    void insert(int num){

        NODE* curr=head, *temp;
        while(num){
                int val;
            temp=(NODE*)malloc(sizeof(NODE));
            std::cin>>val;
            temp->data=val;
            temp->prev=curr;
            temp->next=nullptr;
            curr->next=temp;
            curr=temp;
            num--;
        }
        tail=curr;
        tail->next=nullptr;
    }
    void display(){
        NODE *curr=head;
        while(curr!=tail){
            std::cout<<curr->data<<" ";
            curr=curr->next;
        }
    }

};

int main(){
    Linklist l;
    l.head=l.tail=(NODE*)malloc(sizeof(NODE));
    l.insert(5);
    l.display();
}
