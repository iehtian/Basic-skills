#include<algorithm>
#include<iostream>
using namespace std;
void quicksort(int begin ,int end,int num[]){
    if (begin >= end)
    {
        return;
    }
    int tag=num[begin+end>>1];
    int i=begin;
    int j=end;
    while(i<j){
        while(num[j]>=tag&&i<j){
            j--;
        }
        num[i]=num[j];
        while(num[i]<=tag&&i<j){
            i++;
        }
        num[j]=num[i];
    }
    num[i]=tag;
    quicksort(begin,i-1,num);
    quicksort(i+1, end, num);
}
int main(){
    int n;
    scanf("%d",&n);
    int num[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&num[i]);
    }
    quicksort(0,n-1,num);
    for (int i = 0; i < n; i++){
        printf("%d ",num[i]);
    }
    return 0;
}