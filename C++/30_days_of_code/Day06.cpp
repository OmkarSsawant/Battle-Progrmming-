#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    int i;
      cin >>  t;
    if(t>=1&&t<=10)
    {
        
        for (i = 0; i < t; i++)
        {
            string st;
            cin>>st;
            if(st.size()>=1&&st.size()<=10000)
            {
                for (int j = 0; j < st.size();j++)
                    if (j % 2 == 0 || j == 0)
                    {
                        cout << st[j];
                    }
                    cout<<" ";
                for (int j = 0; j < st.size(); j++)
                    if (j % 2 != 0 )
                        {
                            cout << st[j];
                        }
            }
            cout<<endl;
        }
    }

    return 0;
}
