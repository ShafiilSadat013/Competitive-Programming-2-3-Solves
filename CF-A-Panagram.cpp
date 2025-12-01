#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    string y;
    cin >> y;
    set<char>s;
    for(int i=0;i<x;++i)
    {
        s.insert((char)tolower(y[i]));
    }
    if(s.size()==26)
    {
        cout << "YES\n" << endl;
    }
    else
    {
        cout << "NO\n" << endl;
    }
    return 0;
}
