#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    int start_s = clock();
    int **tda = nullptr;
    int a;
    cin >> a;
    int sizes[2];
    tda = new int *[a];

    for (int i = 0; i < a; i++)
    {
        cout<<endl<<"enter the subsize"<<endl;
        int subsize;
        cin >> subsize;
        sizes[i] = subsize;
        tda[i] = new int[subsize];
        for (int j = 0; j < subsize; j++)
        {
            cout<<endl<<"Enter the number"<<endl;
           cin >> tda[i][j];
       
        }
    }
    for (int i = 0; i < a; i++)
    {
        cout<<"Array  "<<i<<endl;
        for (int j = 0; j < sizes[i]; j++)
        {
            cout << "\t" << tda[i][j] << "\t";
        }

        cout << endl;
    }
    int stop_s = clock();
    cout << "time: " << (stop_s - start_s) / double(CLOCKS_PER_SEC) * 1000 << endl;


    return 0;
}