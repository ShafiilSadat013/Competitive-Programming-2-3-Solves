#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x;
        cin >> x;
        int a[x];
        int ans=0;
        for(int i=0;i<x;++i)
        {
            cin >> a[i];
        }
        sort(a,a+x);
        for(int i=0;i<x;++i)
        {
            ans+=(a[i]-a[0]);
        }
        cout << ans << endl;
    }
    return 0;
}
