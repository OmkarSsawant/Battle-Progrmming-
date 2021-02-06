#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    vector<long long int>nums;
    int N,x,a,b;
    long long int n;

    cin>>N;
    for(int i=0;i<N;i++)
    {
        cin>>n;
        nums.push_back(n);
    }
    

        cin >> x;
        nums.erase(nums.begin() + x-1);
  
        cin >> a >> b;
       nums.erase(nums.begin() + a-1, nums.begin() + b-1);
      
        cout << nums.size() << endl;
       
        for (auto &v : nums)
        {
            cout << v << " ";
        }
    

        return 0;
}
