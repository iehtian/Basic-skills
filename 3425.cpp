#include<algorithm>
#include<iostream>
#include<map>
using namespace std;
int main(){
    int n;
    cin >> n;
    map<int, string> mp;
    for (int i = 0; i < n; i++)
    {
        int mouse;
        string color;
        cin >> mouse >> color;
        mp[mouse] = color;
    }
    for (map<int,string>::reverse_iterator it = mp.rbegin(); it != mp.rend(); it++)
    {
        cout << " " << it->second << endl;
    }
}