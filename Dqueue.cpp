#include<iostream>
#define MAX 10

using namespace std;


class Dqueue{
int fpos=-1,lpos=-1;
int que[MAX];

public:
    bool isfull(){
        if(fpos==lpos+1)
            return false;
        return true;
    }
    void insertfront(int val){
        if(isfull())
            return;
        if(fpos==lpos==-1){
            fpos++;
            lpos++;
            que[fpos]=val;
        }
        else if(fpos==0)
            fpos=MAX-1;
        que[fpos]=val;
    }
    void display(){
        while(fpos<lpos)
            cout<<que[fpos++];
    }
};
int main(){
    Dqueue d;
    int val;
    //cin>>val;
    d.insertfront(5);
    d.display();
}
