#include<algorithm>
#include<iostream>
#include<vector>
#include<math.h>
#include<string.h>
using namespace std;
int num = 1;
typedef struct treenode
{
    char data;
    treenode *lchild, *rchild;
}*tree;
void pre(tree &T,string v){
    if (T->data=='#')
    {
        T->lchild = NULL;
        T->rchild = NULL;
        return;
    }
    treenode *lnode= new treenode;
    lnode->data = v[num];
    T->lchild = lnode;
    num++;
    pre(lnode, v);  
    treenode *rnode= new treenode;
    rnode->data = v[num];
    T->rchild = rnode;
    num++;
    pre(rnode, v);
}
void inorder(tree T,vector<char> &res){
    if (T->lchild!=NULL)
    {
        inorder(T->lchild, res);
    }
    if (T->data!='#')
    {
        res.push_back(T->data);
    }
    if (T->rchild!=NULL)
    {
        inorder(T->rchild, res);
    }
}
int main(){
    string s;
    cin >> s;
    tree T = new treenode;
    T->data = s[0];
    pre(T, s);
    vector<char> res;
    inorder(T, res);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
}