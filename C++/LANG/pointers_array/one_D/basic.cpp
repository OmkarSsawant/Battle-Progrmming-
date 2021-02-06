#include<iostream>

using namespace std;

int main(){
    //?     ===================  BASIC OF THE POINTER TO POINTER   =====================
    int a = 5;

    int *ptr = &a;

    cout << "ptr address : \t" << ptr << " ptr value : \t" << *ptr << endl;
    // * OUTPUT :        ptr address :   0x61fef8                  ptr value :    5

    //points the pointer
    //(now this pointer has address of the first pointer)
    int **ptrofptr = &ptr;

    cout << "value of ptrofptr : " << ptrofptr << endl;     //* value of ptrofptr : 0x61fef4
    cout << "value of *ptrofptr : " << *ptrofptr << endl;   //* value of *ptrofptr : 0x61fef8
    cout << "value of **ptrofptr : " << **ptrofptr << endl; //* value of **ptrofptr : 5

    return 0;
}