#include<bits/stdc++.h>
using namespace std;


int binarySearch(int a[],int x,int key)
{
    int s=0;//starting point
    int e = x; // ending point
    while(s<=e)
    {
        int mid = (s+e)/2 ; // finding mid
        if(a[mid]==key)
        {
            return mid;
        }
        else if(a[mid]>key)
        {
            e = mid-1;
        }
        else
        {
            s = mid+1;
        }
    }
    return -1;
}

int main()
{
    int x;
    cin >> x;
    int a[x];
    for(int i=0;i<x;++i)
    {
        cin >> a[i];
    }
    int key;
    cin >> key;
    //sort(a,a+x);
    cout << binarySearch(a,x,key);
    return 0;
}
