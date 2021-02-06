#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<stdio.h>
using namespace std;

int main()
{
    bool de;
   int N,i,arr[1000];
   cin>>N;
   if(N>=1 && N<=1000)
   {  
        for(int i=0;i<N;i++)
        {
        cin>>arr[i];
        }
        for (int l = 0; l < N; l++)
            if (arr[l] >= 1 && arr[l] <= 1000)
            {
                de=true;
            }
        if(de)
        {
            for (int j = N - 1; j >= 0; j--)
            {
                cout << arr[j] << " ";
            }
        }
       
   }
    return 0;
}
