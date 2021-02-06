
#include<iostream>
#include<vector>

using namespace std;
vector<int> t;
/* int convert_binary(int &n)
{
    int  r,binary=0,i=1;
    while (n > 0)
    {
        r = n % 2;
        binary=binary+r*i;
        t.push_back(r);
        n = n / 2;  
        i*=10;
    }
  
    return binary;
} */
int main()
{
    int n,count=0,max=0;

    cin>>n;
    //int bin = convert_binary(n);
    ///cout<<n<<"'s BINARY NUMBER :"<<bin<<endl;
  
    /* for(auto it=t.begin();it!=t.end();it++)

    {
        if(*it==*(it+1)&&*(it+1)==1)
        {
            count = 2;
            break;
        }
        else if (*it == 1 && *it != *(it + 1) )
        {
            count = 1;
            //break;
        }
    } */
    while (n > 0)
    {
        if( n % 2==1)
            count++;
        else
            count=0;
        if (count > max)
            max = count;
        n/=2;
    }
    cout << "consecutive of 1 is " << count << endl;

    return 0;
}
