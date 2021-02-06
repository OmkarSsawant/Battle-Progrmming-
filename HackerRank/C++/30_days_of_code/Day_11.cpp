/* //#include <bits/stdc++.h>
#include<vector>
#include<iostream>
using namespace std;

int main()
{
    //vector<vector<int>> arr(6);
    int arr[6][6],sum=0,max_sum=0;
    for (int i = 0; i < 6; i++)
    {
      //  arr[i].resize(6);

        for (int j = 0; j < 6; j++)
        {
            cin >> arr[i][j];
        }

       // cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
           {
               if (i >= 0 && i <= 5 && j >= 0 && j <= 5)
               {
                   if (arr[i][j] >= -9 && arr[i][j]<=9)
                       sum = arr[i][j] + arr[i][j + 1] + arr[i][j + 2] + arr[i + 1][j + 1] + arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2];
                   max_sum = (sum > max_sum) ? sum : max_sum;
               }
           }
    }
    cout<<max_sum<<endl;

    return 0;
} */
//Worked
//#include <bits/stdc++.h>
#include <vector>
#include <iostream>
using namespace std;

int main()
{
    //vector<vector<int>> arr(6);
    int arr[6][6], sum = 0, max_sum = -45545456;
    for (int i = 0; i < 6; i++)
    {
        //  arr[i].resize(6);

        for (int j = 0; j < 6; j++)
        {
            cin >> arr[i][j];
        }

        // cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (j + 2 < 6 && i + 2 < 6)
            {
                sum = arr[i][j] + arr[i][j + 1] + arr[i][j + 2] + arr[i + 1][j + 1] + arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2];
                max_sum = (sum > max_sum) ? sum : max_sum;
            }
        }
    }
    cout << max_sum << endl;

    return 0;
}
