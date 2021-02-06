#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int num;
    long int lnum;
    char c;
    float f;
    double df;
    scanf("%d%ld %c%f%lf",&num,&lnum,&c,&f,&df);
    printf("\n%d\n%ld\n %c\n%.3f\n%.9lf",num,lnum,c,f,df);

    return 0;
}
