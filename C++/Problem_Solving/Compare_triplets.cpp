#include "iostream"
#include "vector"
using namespace std;
int ret[2];
// Complete the compareTriplets function below.
int* compareTriplets(vector<int> a, vector<int> b)
{

    
    int A_p = 0, B_p = 0;
    for (int i = 0; i < 3; i++)
    {
        if(a[i]!=b[i])
        (a[i] > b[i]) ? A_p++ : B_p++;
    }
   ret[0]=A_p;
   ret[1]=B_p;

    return ret;
}
/* vector<int> compareTriplets(vector<int> a, vector<int> b)
{

    vector<int> ret;
    int A_p=0,B_p=0;
    for(int i=0;i<2;i++)
    {
        (a[i]>b[i])?A_p++:B_p++;

    }
    auto it = ret.begin();
    ret.insert(it, A_p);
    ret.insert(it+1,B_p);

    return ret;
}
 */
int main()
{
    vector<int>v1(0);
    vector<int>v2(0);
    int a,b,c,p,q,r;
    cin>>a>>b>>c;
    v1.push_back(a);
    v1.push_back(b);
    v1.push_back(c);
    cin>>p>>q>>r;
    v2.push_back(p);
    v2.push_back(q);
    v2.push_back(r);
    int* res=compareTriplets(v1,v2);
  cout<<res[0]<<res[1]<<endl;
    return 0;
}