#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t ;
    while(t--)
    {
        long long m,a,b,c;
        cin >> m >> a >> b >> c;
        long x=0,y=0,z=0;
        if(m>=a) x=a;
        else x=m;
        if(m>=b) y=b;
        else y=m;
        long long d=m-x;
        long long e=m-y;
        if(c<=(d+e)) z=c;
        else z = d+e;
        long long r = x+y+z;
        cout << r << endl;
 
 
    }
    return 0;
 
}
