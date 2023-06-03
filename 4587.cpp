#include<algorithm>
#include<iostream>
using namespace std;
const int N = 1e6+100;
double dd[N];
int main(){
    int n;
    cin >> n;;
    for (int i = 1; i < N; i++)
    {
        dd[i] += dd[i - 1] + 1 / (double)i;
    }
    for (int i = 0; i <n; i++)
    {
        int tem;
        cin >> tem;
        double res = dd[N-1];
        if (tem<1e6)
        {
            printf("case %d: %lf\n", i + 1, dd[tem]);
        }
        else{
            for (int j = N; j <= tem; j++)
            {
                res += 1 / (double)j;
            }
            printf("case %d: %lf\n",i+1, res);
        }
        
    }
}