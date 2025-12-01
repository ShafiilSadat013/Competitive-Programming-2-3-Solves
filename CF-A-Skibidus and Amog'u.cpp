#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string x;
        cin >> x;
        if (x.size()>=2&&x.substr(x.size()-2)=="us")
        {
            x=x.substr(0,x.size()-2)+"i";
        }
        cout << x << endl;
    }
 
    return 0;
 
}
