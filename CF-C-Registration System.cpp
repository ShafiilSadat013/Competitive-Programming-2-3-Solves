#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string x;
    map<string,int> cnt;
    cin >> t;
    while(t--)
    {
        cin >> x;
        cnt[x]++;
        if(cnt[x]>1)
        {
            cout << x << cnt[x]-1 << "\n";
        }
        else cout << "OK" << endl;
 
    }
    return 0;
}
