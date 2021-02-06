#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n,q;
    cin>>n;
    vector<int> v1[n];
    for(int i=0;i<n;i++)
    {
        int m;
        cin>>m;
        int o;
        for(int j=0;j<m;j++)
        {
            cin>>o;
            v1[i].push_back(o);
        }
    }
    int r,s;
    for(int k=1;k<=q;k++)
    {
        cin>>r>>s;
        cout<<v1[r][s]<<endl;
    }

   
    return 0;
}
