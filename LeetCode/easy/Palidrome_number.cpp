#include<iostream>

using namespace std;

class Solution
{
public:
    bool isPalindrome(int x)
    {
        if(x<0){
            return false;
        }
        else{

            int rem,revnum=0,prevnum=x;
            while(x){
                rem=x%10;
                revnum=revnum*10+rem;
                x/=10;
            }
            if (prevnum==revnum)
            {
                return true;
            }
            else{
                return false;
            }
            
        }
    }
};

int main(){

    
    Solution _solp;
    bool ispli=false;
    ispli=_solp.isPalindrome(7777);
    ispli ? cout<<"\n It is Plaidrome " : cout<<"not a plaidrome";
}