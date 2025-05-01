#include<iostream>
#include<stdlib.h>

typedef struct DyanmicLinkList
{
    int data;
    struct DyanmicLinkList *next=nullptr;
}*STACK;

STACK *top=nullptr;
class Stack{
    public:
        STACK* newnode(){
            return (STACK*)malloc(sizeof(STACK));
        }
        
        void input(){
            if(top==nullptr){
                std::cout<<"UnderFlow";
                return;
            }

        }
};