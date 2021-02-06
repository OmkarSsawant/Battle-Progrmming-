#include<iostream>
#include<string>
using namespace std;

int main()
{
    string a,b,cc;
    char t1;
    cin>>a>>b;
    cout<<a.size()<<" "<<b.size()<<endl;
    cc=a+b;
    cout<<cc<<endl;
    t1=a[0];
    a[0]=b[0];
    b[0]=t1;
    cout<<a<<" "<<b<<endl;
        return 0;
}