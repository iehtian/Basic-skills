#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a[10];
    vector<int> ji, ou;
    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
        if (a[i]%2==1)
        {
            ji.push_back(a[i]);
        }
        else{
            ou.push_back(a[i]);
        }
    }
    sort(ou.begin(), ou.end());
    sort(ji.begin(), ji.end(), greater<int>());
    for (int i = 0; i < ji.size(); i++)
    {
        cout << ji[i] << " ";
    }
    for (int i = 0; i < ou.size(); i++)
    {
        cout << ou[i] << " ";
    }
    
}