#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    vector<int>a;
    int n;
    cin>>n;
    if(n>=1&&n<=1000)
    {
        for (int i = 0; i < n; i++)
        {
            int nm;
            cin >> nm;
            if(nm>=1&&n<=10000)
            a.push_back(nm);
        }
        reverse(a.begin(), a.end());
    }
    vector<int>::iterator p=a.begin();
    while(p!=a.end())
    {
        cout<<*p<<" ";
        p++;
    }
    return 0;
}