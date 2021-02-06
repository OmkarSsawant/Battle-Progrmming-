#include<iostream>

using namespace std;

class Solution
{
public:
    int reverse(int x)
    {
        bool b;
        signed int r;
        int rev_num=0;
        while (x && x!=0)
        {
            r=x%10;
            rev_num=rev_num*10+r;
            x/=10;
        }

        return rev_num;
        
    }
};

int main()
{
    Solution a;

    int mun,reverse;
    cin>>mun;
    reverse=a.reverse(mun);
    cout<<reverse<<endl;
    return 0;
}