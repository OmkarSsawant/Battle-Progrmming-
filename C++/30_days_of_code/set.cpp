#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    set<int>s;
   int q,n;
   cin>>q;
   for (int i = 0; i < q; i++)
   {
       int tmp;
       int er;
       int sr;
       cin>>n;
       switch(n)
       {
           case 1:
                cin>>tmp;
                s.insert(tmp);
                break;
           case 2:
                cin>>er;
                s.erase(er);
                break;
            case 3:
                cin>>sr;
                auto f=s.find(sr);
                if(f!=s.end())
                    cout<<"Yes"<<endl;
                else
                {
                    cout<<"No"<<endl;
                }
                break;
       }
   }
   
    return 0;
}



