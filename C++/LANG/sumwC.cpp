#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a,b,c,sum=0;
    cin>>a>>b>>c;
    if (a && b && c >= 1 && a && b && c <= 1000)
    {
        sum=a+b+c;
        cout<<sum;
    }
    else
    {
        cout<<"ERROR 404";
    }
    

        return 0;
}
