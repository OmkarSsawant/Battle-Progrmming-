#include<iostream>

using namespace std;

int main(){

    //Intialize a dynamic array pointer

    int **ptr = nullptr;

    //specify no of row pointers

    ptr =  new int*[2];

    //now specify each colum size

    for (size_t i = 0; i < 2; i++)
    {
        ptr[i]  = new int[3];
    }
    //     INPUT

    cout<<"Array Initialized :"<<endl;
    cout<<"Input Array Now"<<endl;
    for (size_t i = 0; i < 2; i++)
    {
    for (size_t j = 0; j < 3; j++)
    {
        cin>> *((*(ptr + i)) + j) ;
    }
      
    }
    

    //printing
    cout << "print  array => " << endl;
    for (size_t i = 0; i < 2; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            cout<< *((*(ptr + i)) + j)<<endl;
        }
    }
    return 0;
}