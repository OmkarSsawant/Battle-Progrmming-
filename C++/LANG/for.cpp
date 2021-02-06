#include <iostream>
#include <cstdio>
using namespace std;


int main()
{
   int a,b,n;

  string Nstr;
   cin>>a>>b;
for(n=a;n<=b;n++)
{
if(n>=1 && n<=9)
{
        if (n == 1)
        {
            Nstr="one";
        }
        else if (n == 2)
        {
            Nstr= "two";
        }
        else if (n == 3)
        {
           Nstr= "three";
        }
        else if (n == 4)
        {
            Nstr="four";
        }
        else if (n == 5)
        {
            Nstr= "five";
        }
        else if (n == 6)
        {
            Nstr= "six";
        }
        else if (n == 7)
        {
            Nstr="seven";
        }
        else if (n == 8)
        {
           Nstr= "eight";
        }
        else if (n == 9)
        {
           Nstr="nine";
        }
    
cout<<Nstr<<endl;
    
}else
{

  if (n%2==0)
  {
      cout << "even"<<endl;
  }
  else
  {
      cout << "odd"<<endl;
  }
  

}
}

    return 0;
}
