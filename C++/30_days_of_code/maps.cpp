#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    map<string,int>s;
   int q,n;
   cin>>q;
   for (int i = 0; i < q; i++)
   {
       string name,er,sr;
       int mrks=0;
       cin>>n;
       switch(n)
       {
           case 1:
           {
                cin>>name>>mrks;
                auto c=s.find(name);
                if(c!=s.end())
                {
                    c->second+=mrks;
                }
                else
                {
                     s.insert(make_pair(name,mrks));
                }
                break;
           }

           case 2:
                cin>>er;
                s.erase(er);
                break;
            case 3:
                cin>>sr;
                auto f=s.find(sr);
                if(f!=s.end())
                {
                    cout<<f->second<<endl;
                }
                else
                {
                    cout<<"0"<<endl;
                }
                

                break;
       }
   }
   
    return 0;
}



