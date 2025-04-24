#include<iostream>
#include<stdlib.h>
#define MAX 10
int top=-1;

class Stack{
    public:
        void input(int *arr){
            if(top==MAX-1){
                std::cout<<"Overflow\n";
                return;
            }
            int val;
            cout<<"Enter Data:";
            top++;
            std::cin>>val;
            arr[top]=val;
        }
        void remove(int *arr){
            if(top==-1){
                std::cout<<"Under Flow\n";
                return;
            }
            std::cout<<"Value removed: "<<arr[top];
            top--;
        }
        void display(int *arr){
            std:::cout<<"Values in Stack:";
            for(int i=top;i>=0;i--)
                cout<<arr[i]<<" ";

        }
}
int main(){
    
    int arr[MAX];
    Stack st;
    
    while(1){

        int opt;
        std::cout<<"\nEnter Choice:\n1. Input\n2. Remove\n3.Display\n0. Exit\nChoice:";
        cin>>opt;
        switch(opt){
            case 1:
                st.input(arr);
                break;
            case 2:
                st.remove(arr);
                break;
            case 3:
                st.display(arr);
                break;
            case 0:
                exit(0);
        }
    }
}