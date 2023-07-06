#include<algorithm>
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int num[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> num[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            /* code */
            if (num[i]>num[j])
            {
                /* code */
            count++;
            }   
        }
    }
    cout << count;
}