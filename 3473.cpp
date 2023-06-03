#include<algorithm>
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int jiao;
        cin >> jiao;
        int mi, ma;
        if (jiao%2==1)
        {
            printf("0 0\n");
            continue;
        }
        ma = jiao / 2;
        mi = jiao / 4;
        if (jiao%4!=0)
        {
            mi++;
        }
        printf("%d %d\n", mi, ma);
    }

}