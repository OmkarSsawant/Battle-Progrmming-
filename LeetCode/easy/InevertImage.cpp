#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        reverse(A.begin(),A.end());
        for (int i =0;i<A.size();i++)
        {
            for (int j = 0; j < A.size(); j++){

                if (A[i][j] == 0)
                    A[i][j] = 1;
                else if (A[i][j] == 1)
                    A[i][j] = 0;
                }
        }
        return (A);
    }
    
};