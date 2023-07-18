#include<algorithm>
#include<iostream>
using namespace std;
int main(){
    string num1,num2;
    cin >> num1 >> num2;
    int len=max(num1.length(),num2.length());
    while (num1.length()<len)
    {
        num1 = '0' + num1;
    }
    while (num2.length()<len)
    {
        num2 = '0' + num2;
    }
    string result;
    int add = 0;
    for (int i = len-1; i >= 0; i--)
    {
        if (num1[i] +num2[i]+add-96>=10)
        {
            result += num1[i] + num2[i] + add - 96 - 10+48;
            add=1;
        }
        else{
            result += num1[i] + num2[i] + add-96 +48;
            add = 0;
        }
    }
    if (add==1)
    {
        result += '1';
    }
    reverse(result.begin(), result.end());
    cout << result << endl;
}