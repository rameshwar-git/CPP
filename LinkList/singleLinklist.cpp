#include<iostream>
#include<stdlib.h>

class singleLinklist
{
public:
struct Node {
    int data;
    Node* next;
};
typedef struct Node* NODE;
NODE head;

    singleLinklist();
    void createnode();
    void insert(int num);
};

singleLinklist::singleLinklist()
{
    head = NULL;
}

void singleLinklist::createnode()
{
    head = (NODE)malloc(sizeof(Node));
    head->next = NULL;
    return;
}

void singleLinklist::insert(int num)
{
    if (head == NULL)
        createnode();
    NODE ptr, temp = head;
    while (num)
    {
        ptr = (NODE)malloc(sizeof(Node));
    }
}

