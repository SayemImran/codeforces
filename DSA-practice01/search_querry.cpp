/*
    data structure practice day 02 week 01
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t;
    cin>>n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    cin>>t;

    while (t--)
    {
        int tg, flag = 0;
        cin>>tg;
        int st = 0,ed = n-1;
        while (st<=ed)
        {
            int mid = (st+ed)/2;
            if (v[mid] == tg)
            {
                flag = 1;
                break;
            }
            else if (v[mid] < tg)
            {
                st = mid+1;
            }
            else{
                ed=mid-1;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
    
    
    return 0;
}