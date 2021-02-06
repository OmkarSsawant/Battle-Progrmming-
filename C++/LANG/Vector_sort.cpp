#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    vector<int>V;
    int N;
    cin>>N;
    if(N>=1&&N<=pow(10,5))
        for(int i=0;i<N;i++)
        {
            int temp;
            cin>>temp;
            if(temp>=1 && temp <=pow(10,9))
            V.push_back(temp);
        }
    sort(V.begin(), V.end());
        vector<int>::iterator it = V.begin();

    while(it!= V.end())
    {
        cout<<*it<<" ";
        it++;
    }
    return 0;
}
