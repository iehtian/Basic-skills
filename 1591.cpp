#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    int tag[n] = {0}, a[n];
    long long mi = 10000000000;
    int  ma = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i]>ma)
        {
            tag[i] = 1;
            ma = a[i];
        }
    }
    for (int i = n-1; i >=0; i--)
    {
        if (a[i]<mi)
        {
            mi = a[i];
            if (tag[i]==1)
            {
                tag[i] = 2;
            }
        }
    }
    vector<int> res;
    for (int i = 0; i < n; i++)
    {
        if (tag[i]==2)
        {
            res.push_back(a[i]);
        }
    }
    printf("%d\n", res.size());
    sort(res.begin(), res.end());
    if (res.size()!=0)
    {
        printf("%d", res[0]);
    }
    else{
        printf("\n");
        return 0;
    }
    for (int i = 1; i < res.size(); i++)
    {
        printf(" %d", res[i]);
    }
}