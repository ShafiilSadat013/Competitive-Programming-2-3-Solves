#include<bits/stdc++.h>
using namespace std;
int main()
{
    string x;
    int u=0,l=0;
    cin >> x;
    for(int i=0;i<x.length();++i)
    {
        if(isupper(x[i]))
        {
            u++;
        }
        else if(islower(x[i]))
        {
            l++;
        }
    }
    if(u<l)
    {
       for(int i=0;i<x.length();++i)
       {
           x[i]=tolower(x[i]);
       }
       cout << x << endl;
    }
    else if(u>l)
    {
       for(int i=0;i<x.length();++i)
       {
           x[i]=toupper(x[i]);
       }
       cout << x << endl;
    }
    else if(u==l)
    {
        for(int i=0;i<x.length();++i)
       {
           x[i]=tolower(x[i]);
       }
       cout << x << endl;
    }
    return 0;
 
}
