#include<iostream>

using namespace std;

int main(){
    
    
    //?     ==================  CREATING AND USING 1 D ARRAY
       int *ptr = new int[0];

    for (int i = 0; i < 5; i++)
    {
        cin >> *(ptr + i);
    }

    for (int i = 0; i < 5; i++)
    {
        cout << *(ptr + i);
    }

    return 0;
}