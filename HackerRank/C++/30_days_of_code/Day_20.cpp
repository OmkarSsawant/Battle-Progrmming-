#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int main()
{
    int n,swaps=0,s;
    cin >> n;
    s=n;
    vector<int> a(n);
    for (int a_i = 0; a_i < n; a_i++)
    {
        cin >> a[a_i];
    }
    // Write Your Code Here
  
    for(int i=0;i<n;i++)
    {
        swaps=0;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp;
                    //swap
                    temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                swaps++;
            }
          
        }
        if (swaps == 0)
            break;

    }//Bubble sorted
    cout << "Array is sorted in "<<swaps<<" swaps."<<endl;
    cout << "First Element:"<<a[0]<<endl;
    cout << "Last Element:"<<a[s]<<endl;

     return 0;
}
