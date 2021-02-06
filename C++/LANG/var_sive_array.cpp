
// #include <cmath>
// #include <iostream>
// #include <vector>

// #include <map>
// using namespace std;
// //TODO: Implement without  STL
// int main()
// {
//     int n, q;
//     cin >> n >> q;
//     vector<vector<int>> smap;
//     vector<int> singelvec;
//     vector<int> vi;

//     int subsize;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> subsize;
//         for (int j = 0; j < subsize; j++)
//         {
//             int mun;
//             cin >> mun;

//             singelvec.push_back(mun);
//         }
//         smap.push_back(singelvec);
//         singelvec.clear();
//     }
//     for (int p = 0; p < q; p++)
//     {
//         int mi, si;
//         cin >> mi >> si;
//         vi.push_back(smap[mi][si]);
//     }
//     for (int n : vi)
//     {
//         cout << n << endl;
//     }

//     return 0;
// }
//                *  APPROCH 2 [ without STL]

#include <iostream>
#include <ctime>
using namespace std;

int main()
{

    int **tda = nullptr;
    int a, q;
    cin >> a >> q;
    
   
    int *results = new int[q];  
    tda = new int *[a];

    for (int i = 0; i < a; i++)
    {

        int subsize;
        cin >> subsize;
        
        tda[i] = new int[subsize];
        for (int j = 0; j < subsize; j++)
        {
            cin >> tda[i][j];
        }
    }
    //query
        for (int p = 0; p < q; p++)
        {
            int mi, si;
            cin >> mi >> si;

            results[p] = tda[mi][si];
           
        }
   for (size_t i = 0; i < q; i++)
   {
       cout<<results[i]<<endl;
   }
   

      
    return 0;
}
