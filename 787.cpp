#include<algorithm>
#include<cstdio>
#include<cstring>
#include<iostream>
#include<vector>
#include<queue>
#include<cmath>
using namespace std;
int b[1000000];
void mergesort(int a[],int l,int r){
    if (l>=r) return;
    int mid=(l+r)/2;
    mergesort(a,l,mid);
    mergesort(a,mid+1,r);
    for (int i = l; i <= r; i++)
    {
        b[i]=a[i];
    }
    int i = l, j = mid + 1, k = l;
    for (; i<=mid&&j<=r; k++)
    {
        if (b[i]<=b[j])
        {
            a[k]=b[i];
            i++;
        }
        else{
            a[k]=b[j];
            j++;
        }
    }
    while (i<=mid)
    {
        a[k++]=b[i++];
    }
    while (j<=r)
    {
        a[k++]=b[j++];
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    mergesort(a,0,n-1);
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    
}