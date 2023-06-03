#include<algorithm>
#include<iostream>
using namespace std;
void quicksort(int begin ,int end,int num[]){
    if (begin >= end)
    {
        return;
    }
    int tag=num[begin];
    int i=begin;
    int j=end-1;
    while(i<j){
        while(num[i]<tag&&i<j){
            i++;
        }
        while(num[j]>tag&&i<j){
            j--;
        }
        if(i<j){
            swap(num[i],num[j]);
        }
    }
    quicksort(begin,i,num);
    quicksort(j + 1, end, num);
}
int main(){
    int n;
    cin>>n;
    int num[n];
    for (int i = 0; i < n; i++)
    {
        cin>>num[i];
    }
    quicksort(0,n,num);
    for (int i = 0; i < n; i++){
        cout<<num[i]<<" ";
    }
}