/*
    data structure practice day 02 week 01
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    int l,r;
    vector<int> runnigSum(n);
    runnigSum[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        runnigSum[i] = runnigSum[i-1]+v[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout<<runnigSum[i]<<" ";
    }
    
    
    
    return 0;
}