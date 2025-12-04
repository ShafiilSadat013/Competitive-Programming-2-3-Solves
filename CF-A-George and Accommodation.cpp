#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,p,q,cnt =0;
    cin >> x;
    for(int i=0;i<x;++i)
    {
        cin >> p >> q;
        if((q-p)>=2)
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
