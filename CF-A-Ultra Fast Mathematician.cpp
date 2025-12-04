#include<bits/stdc++.h>
using namespace std;
int main()
{
    string x,y;
    cin >> x >> y;
    int z = x.length();
    for(int i=0;i<z;++i)
    {
        if(x[i]!=y[i]) cout << '1';
        else cout << '0';
    }
    return 0;
}
