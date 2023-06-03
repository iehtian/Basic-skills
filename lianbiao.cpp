#include<iostream>
#include<algorithm>
using namespace std;
typedef struct node
{
    int data;
    node *next;
}Lnode,*list;
list headnew(list &head){
    // node *p = head;
    head = new node;
    for (int i = 0; i < 5; i++)
    {
        node *q = new node;
        q->next = head->next;
        head->next = q;
        q->data = i;
    }
    
    return head;
}
list tailinsert(list &head){
    head = new node;
    node *p = new node;
    p = head;
    for (size_t i = 0; i < 5; i++)
    {
        node *q = new node;
        q->data = i;
        p->next = q;
        q->next = NULL;
        p = p->next;
    }
    return head;
}
node *seek(list head,int sou){//按值查找
    node *p = head->next;
    while (p)
    {
        if (p->data==sou)
        {
            return p;
        }
        p = p->next;
    }
    return NULL;
}
node *seekasnum(list head,int i){//按序号查找
    if (i<1)
    {
        return NULL;
    }
    node *p = head->next;
    if (i==1)
    {
        return p;
    }
    int j = 1;
    while (p&&j<i)
    {
        p = p->next;
        j++;
    }
    return p;
}
list syclehead(list &head){
    head = new node;
    head->next = head;
    for (int i = 0; i < 5; i++)
    {
        node *p = new node;
        p->data = i;
        p->next = head->next;
        head->next = p;
    }
    return head;
}
list sycletail(list &head){
    head = new node;
    node *p = new node;
    p = head;
    p->next = p;
    for (int i = 0; i < 5; i++)
    {
        node *q = new node;
        q->data = i;
        q->next = head;
        p->next = q;
        p = p->next;
    }
    return head;
}
int main(){
    list head;
    // head = headnew(head);
    // head = tailinsert(head);
    // node *p = seek(head, 6);
    head = sycletail(head);
}