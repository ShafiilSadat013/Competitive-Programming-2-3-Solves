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
       vector<int>a(x);
       for(int i=0;i<x;++i)
       {
           cin >> a[i];
       }
       sort(a.begin(),a.end());
       int sum =0;
       for(int i=0;i<x;++i)
       {
           sum+=(a[i]-a[0]);
       }
       cout << sum << endl;
    }
    return 0;
}
