#include<iostream>
#include<vector>
using namespace std;


class Calculator : public AdvancedArithmetic {
vector<int> dn;
int divisor_sum;
public:
    int divisorSum(int n) {
        for(int i=1;i<=n;i++)
            if(n%i==0)
                dn.push_back(i);
    for(auto &d : dn )
    {
        divisor_sum+=d;
    }
        return divisor_sum;
    }
};