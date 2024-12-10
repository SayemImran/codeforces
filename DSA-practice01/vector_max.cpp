#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long int maxim;
    cin>>n;

    vector<long long int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    maxim = *max_element(v.begin(),v.end());
    cout<<maxim<<endl;
    return 0;
}