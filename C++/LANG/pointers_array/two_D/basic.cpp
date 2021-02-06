


#include <iostream>


using namespace std;

int main()

{
    //2D aA
    int D2[2][3]={
        {2,4,6},
        {1,3,5}
    };

    int (*ptr)[3] = D2;

    cout << "address whole_array[0]  =   \t" << ptr << endl;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      //* 0x61fef4 => pointer to whole 2D[0] array  => *(1D)
                                                          //*  (pointer)    [2,4,6]
                                                          //because array gives address of first element
    cout << "address whole_array[1]  =   \t" << ptr + 1 << endl; //* 0x61fef8 => pointer  2D[1] array => *(1D)


cout << "ptr is address of whole_array[0] so *ptr will give address of whole_array[0][0] (here &2) = \t" << *ptr << endl;//* 0x61fef4 => pointer to 2Darray[0] => 1D array
                                                               //* (pointer)  [2,4,6] (means address of 2)
                                                               //because array gives address of first element

cout << "decoding addrees of 2 (&2)  = \t" << *(*ptr) << endl; //* 2

cout << "ptr is address of whole_array[1] so *ptr will give address of whole_array[1][0] (here &1) = \t" << *(ptr + 1) << endl; //* 0x61fef8 => pointer to whole 2D[1] => 1D array
                                                                                                                           //* (pointer)  [1,3,5] (means address of 1)
                                                                                                                           //because array gives address of first element

cout << "decoding addrees of 1 (&1)  = \t" << *(*(ptr + 1)) << endl; //* 1


return 0;
}