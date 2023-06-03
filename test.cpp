#include<algorithm>
#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int n = 100;
    int a[n],b[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin>>b[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i]!=b[i])
        {
            /* code */
            cout << i << " " << a[i]<<" "<<b[i]<<endl;
        }
        
    }
    
}