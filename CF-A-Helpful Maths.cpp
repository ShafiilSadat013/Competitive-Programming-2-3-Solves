#include<bits/stdc++.h>
using namespace std;
int main()
{
    string x;
    cin >> x;
    for(int i=0;i<x.size();i+=2)
    {
        for(int j= i+2;j<x.size();j+=2)
        {
            if(x[i]>x[j])
            {
                swap(x[i],x[j]);
            }
        }
    }
    cout << x << endl;
    return 0;
 
}
