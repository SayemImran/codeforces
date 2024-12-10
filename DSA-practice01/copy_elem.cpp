#include<bits/stdc++.h>
using namespace std;

int main()
{
    int sz1, sz2;
    cin>>sz1;
    vector<int> v1(sz1);
    for (int i = 0; i < sz1; i++)
    {
        cin>>v1[i];
    }
    cin>>sz2;
    vector<int> v2(sz2);
    for (int i = 0; i < sz2; i++)
    {
        cin>>v2[i];
    }

    vector<vector<int>> v3;
    v3.assign({v1,v2});

    for(auto vec : v3){
        for(auto elem : vec){
            cout<<elem<<" ";
        }
    }
    
    return 0;
}