/* #include <iostream>

        #include <vector>
        #include <cmath>
        #include<algorithm>
        using namespace std;
        int diagonalDifference(vector<vector<int>> arr)
        {
            vector<int> pde;
            vector<int> sde;
            long int spde = 0, ssde = 0;
            int ans = 0, size;
            int n = arr.size();
            
            for (int j = 0; j < n; j++)
            {
                if (arr[j][j])
                    pde.push_back(arr[j][j]);
            }
            for (int i = 0; i <n; i++)
            {
                for(int j=0;j<n;j++)
                if (i+j==n-1)
                    sde.push_back(arr[i][i]);
            }
            for (auto &i : pde)
                spde += i;
            for (auto &j : sde)
                ssde += j;

            ans = abs(spde - ssde);
            return ans;
        }

        int main()
        {
            vector<vector<int>> arr;
            int n, dd;
        
            cin >> n;
            
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    cin >> arr[i][j];
                }
            }


            dd = diagonalDifference(arr);
            cout << dd << endl;

            return 0;
        }
*/

#include <iostream>

#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int diagonalDifference(vector<vector<int>> arr)
{
    int _sum1,_sum2;
    int size=arr.size();
    int n=sqrt(size);
    int i=0,j=0;
    while (j<n && i <n)
    {
        _sum1=arr[i][j];
        i++;
        j++;
    }
j=n;
 for (int i = 0; i < n; i++)
 {
     for (int j = 0; j < n; j++)
     {
         if (i == n - j - 1)
             _sum2 += arr[i][j];
     }
     
 }
 
    int result=_sum1-_sum2;
    return abs(result);
}



