#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,x=0;
    cin >> a >> b >> c >> d ;
    if(a==b||a==c||a==d) x++;
    if(b==c||b==d) x++;
    if(c==d) x++;
    cout << x << endl;
 
    return 0;
}
