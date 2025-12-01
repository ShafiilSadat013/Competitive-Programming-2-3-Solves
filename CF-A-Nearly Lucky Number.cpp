#include<bits/stdc++.h>
using namespace std;
bool isL(long long x)
{
    if(x==0) return false;
    while(x>0)
    {
        int y = x%10;
        if(y!=4&&y!=7) return false;
        x/=10;
    }
    return true;
}
int main()
{
    long long x;
    cin >> x;
    int cnt = 0;
    while(x>0)
    {
        int y = x%10;
        if(y==4||y==7) cnt++;
        x/=10;
    }
    if (isL(cnt)) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
