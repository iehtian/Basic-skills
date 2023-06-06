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
    //     if(i<j&&num[i]!= num[j]){
    //         swap(num[i],num[j]);
    //     }
    //     else if (num[i]==num[j]){
    //         i++;
    // }
    }
    num[i]=tag;
    quicksort(begin,i-1,num);
    quicksort(i+1, end, num);
}
void quick_sort(int q[], int l, int r)
{
    if (l >= r) return;

    int i = l - 1, j = r + 1, x = q[l + r >> 1];
    while (i < j)
    {
        do i ++ ; while (q[i] < x);
        do j -- ; while (q[j] > x);
        if (i < j) swap(q[i], q[j]);
    }
    quick_sort(q, l, j), quick_sort(q, j + 1, r);
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
    quick_sort(num,0,n-1);
    for (int i = 0; i < n; i++){
        printf("%d ",num[i]);
    }
    return 0;
}