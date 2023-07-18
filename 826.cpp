#include<algorithm>
#include<iostream>
using namespace std;
typedef struct node{
    int rank,data;
    node* next;
} *list;
int tag = 0;
void insert(list &l, int data,int rankt,int rank){
    node *tem = l;
    while (tem->next!=NULL&&tem->rank!=rankt)
    {
        tem=tem->next;
    }
    node *p = new node;
    p->data = data;
    p->rank = rank+1;
    p->next = NULL;
    p->next=tem->next;
    tem->next=p;
}
void deletenode(list &l,int rank){
    node *tem = l;
    while (tem->next!=NULL&&tem->rank!=rank)
    {
        tem=tem->next;
    }
    node *p = tem->next;
    tem->next=p->next;
    delete(p);
}
void bianli(list &l){
    node *p = l;
    if (tag==0)
    {
        cout << p->data << " ";
    }
    while (p->next!=NULL)
    {
        p=p->next;
        cout << p->data << " ";
    }
    while (l->next!=NULL)
    {
        p = l;
        l=l->next;
        delete(p);
    }
    delete(l); 
}
int main(){
    list l;
    l->next = NULL;
    int n;
    cin>>n;
    int rank=0;
    for(int i=0;i<n;i++){
        char c;
        cin>>c;
        if(c=='H')
        {
            tag = 0;
            rank++;
            int data;
            cin>>data;
            l->data=data;
            l->rank=rank;
        }
        else if (c=='D')
        {
            int rankt;
            cin>>rankt;
            if (rankt==0)
            {
                tag = 1;
                continue;
            }
            deletenode(l, rankt);
        }
        else{
            int rankt,data;
            cin>>rankt>>data;
            insert(l, data, rankt,rank);
            rank++;
        }
    }
    bianli(l);
}