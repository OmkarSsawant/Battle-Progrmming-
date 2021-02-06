#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
using namespace std;

int main()
{
    vector<long long int>vec;
    vector<long long int>test;
    int N;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        int t;
        cin>>t;
        vec.push_back(t);
    }
    sort(vec.begin(),vec.end());
    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        int y;
        cin>>y;
        test.push_back(y);
    }    
  
    auto it_q=test.begin();
    while(it_q!=test.end())
    {
       
        auto it = find(vec.begin(),vec.end(),*it_q);
        if(it!=vec.end())
        {
            int index=distance(vec.begin(),it);
                cout<<"Yes "<<index+1<<endl;
        }
        else
        {
            auto low=lower_bound(vec.begin(),vec.end(),*it);
            int index_ = find(vec.begin(), vec.end(), *low) - vec.begin() ;
             cout << "No " << index_ + 1 << endl;
        }
        
        it_q++;
    }




    return 0;
}
