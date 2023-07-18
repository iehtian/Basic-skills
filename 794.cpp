#include<algorithm>
#include<iostream>
using namespace std;
int main(){
    string A;
    int B;
    cin >> A >> B;
    string shang,yu;
    string tem;
    for (int i = 0; i <A.length() ; i++)
    {
        tem+=A[i];
        int j = stoi(tem);
        if (j>=B)
        {
            shang+=to_string(j/B);
            tem=to_string(j%B);
        }
        else{
            shang += '0';
        }
    }
    while(shang[0]=='0'&&shang.length()!=1){
        shang=shang.substr(1);
    }
    while(tem[0]=='0'&&tem.length()!=1){
        tem=tem.substr(1);
    }
    cout<<shang<<endl<<tem;
}