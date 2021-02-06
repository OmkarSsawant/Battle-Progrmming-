#include <iostream>
#include <cstdio>
using namespace std;
/*  You have to write a function int max_of_four(int a, int b, int c, int d) 
    which reads four arguments and returns the greatest of them. 

    Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d)
{
    int sub_max1 = a > b ? a : b;
    int sub_max2 = c > d ? c : d;

    int fmax = sub_max1 > sub_max2 ? sub_max1 : sub_max2;

    return fmax;
}
int complextrymax_of_four(int a, int b, int c, int d)
{
    int fmax = (a > b ? a : b) > (c > d ? c : d) ? ((a > b ? a : b)) : (c > d ? c : d);

    return fmax;
}
int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = complextrymax_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}
