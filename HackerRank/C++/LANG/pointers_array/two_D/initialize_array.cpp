#include<iostream>

using namespace  std;

int main(){
    //Intialize a dynamic array pointer

    int **ptr = nullptr;

    //specify no of row pointers

    ptr = new int *[2];

    //now specify each colum size

    for (size_t i = 0; i < 2; i++)
    {
        ptr[i] = new int[3];
    }
    return 0;
} 
