#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

// Complete the aVeryBigSum function below.
long aVeryBigSum(vector<long> ar)
{
    long LSum=0;
    for(auto &i :ar)
        LSum+=i;
    return LSum;
}
int main()
{
    vector<long>v;
    int n;
    long LS;
    cin>>n;
    if(n>=1&&n<=10)
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        if(temp>=0&&temp<=pow(10,10))
        v.push_back(temp);
    }
    LS=aVeryBigSum(v);
    cout<<LS;
}