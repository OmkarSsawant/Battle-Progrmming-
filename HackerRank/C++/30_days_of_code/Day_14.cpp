#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference
{
private:
    vector<int> elements;
    
public:
    int maximumDifference;
    int tmax;

    // Add your code here
    Difference(vector<int> v)
    {
        elements=v;
    }
    void computeDifference()
    {
        for(auto it=elements.begin();it!=elements.end();it++)
        {
            for (auto i = elements.begin(); i != elements.end(); i++)
            {
                tmax = (*it - *i > tmax) ? *it - *i : tmax;
                maximumDifference = (tmax > maximumDifference) ? tmax : maximumDifference;
            }
        }
    }
 

}; // End of Difference class

int main()
{
    int N;
    cin >> N;

    vector<int> a;

    for (int i = 0; i < N; i++)
    {
        int e;
        cin >> e;

        a.push_back(e);
    }

    Difference d(a);

    d.computeDifference();

    cout << d.maximumDifference;

    return 0;
}