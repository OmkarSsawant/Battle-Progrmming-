#include<iostream>

using namespace std;


int main()
{
    for(int i=0;i<4;i++)
    {
    int N;
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    if(N>=1&&N<=100)
    {
        if(N%2!=0)
        cout<<"Weird"<<endl;
        if(N%2==0&&N>=2&&N<=5)
        cout<<"Not Weird"<<endl;
        if (N % 2 == 0 && N >= 6 && N <= 20)
            cout << "Weird" << endl;
        if(N%2==0&&N>20)
            cout<<"Not Weird"<<endl;
    }
    }
    return 0;
}
