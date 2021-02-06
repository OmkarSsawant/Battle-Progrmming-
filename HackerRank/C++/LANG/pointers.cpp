#include <stdio.h>
#include<math.h>
/* You have to complete the function void update(int *a,int *b), 
which reads two integers as argument,
 and sets  with a the sum of them, and b with the absolute difference of them. */
void update(int *a, int *b)
{
    int o1 =(*a) + (*b);

    (*b) = abs((*a) - (*b));

    *a = o1;
    // Complete this function
}

int main()
{
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
