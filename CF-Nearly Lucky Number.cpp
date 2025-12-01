#include<iostream>
using namespace std;
int main()
{
    string r;
    cin >> r;
    int x=0;
    for(char a:r){
            if(a=='4'||a=='7'){
                x++;
            }
 
    }
    if(x==4||x==7){
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
 
 
 
    return 0;
}
