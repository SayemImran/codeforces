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
    vector<int> rangee(n);
    int l,r;
    rangee[0] = v[0];

    for (int i = 1; i < n; i++)
    {
        rangee[i] = rangee[i-1]+v[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout<<rangee[i]<<" ";
    }
    
    cout<<"\n";
    for (int i = 0; i < n; i++)
    {
        int lsum = rangee[i-1];
        int rsum = rangee[n-1] - rangee[i];

        if (lsum == rsum)
        {
            cout<<i<<endl;
            break;
        }
        
    }
    
    
    
    
    return 0;
}