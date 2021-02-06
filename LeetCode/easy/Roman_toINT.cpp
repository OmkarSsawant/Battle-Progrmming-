#include <iostream>
#include <vector>
using namespace std;

class Solution
{
    //vector<int> vecstr;
  //  int count = 0;
   long  int sum = 0;
  
public:
    //============   OS Solution Less Effficent ============
    /*  
  long  int romanToInt(string s)
    {
        vecop(s);

        vector<int>::iterator itc = vecstr.begin();
        while (itc != vecstr.end())
        {
            count++;
            itc++;
        }
        vector<int>::iterator itf = vecstr.begin();
        for (int i = count; i >= 0; i--)
        {
            if (vecstr[i - 1] < vecstr[i])
            {
                vecstr[i - 1] = change_realstate(vecstr[i - 1]);
            }
        }
        vector<int>::iterator its = vecstr.begin();

        while (its != vecstr.end())
        {
            sum += (*its);
            its++;
        }

        cout << "SUM :" << sum << endl;
        return sum;
    }

    void vecop(string str)
    {
        for (int i = 0; i < str.length(); i++)
        {

            switch (str[i])
            {
            case 'I':
                vecstr.push_back(1);
                break;
            case 'V':
                vecstr.push_back(5);
                break;
            case 'X':
                vecstr.push_back(10);
                break;

            case 'L':
                vecstr.push_back(50);
                break;

            case 'C':
                vecstr.push_back(100);
                break;

            case 'D':
                vecstr.push_back(500);
                break;

            case 'M':
                vecstr.push_back(1000);
                break;

            default:
                vecstr.push_back(0); //not needed then remove
                break;
            }*/
     //   } 
   // }
   //TODO: Undergo this again :
    int romanToInt(string s)
    {
        int f;
        for(int i=s.length()-1;i>=0;i--){
            if(int_of(s[i])>=f){
                sum += int_of(s[i]);
            }
            else{
                sum -= int_of(s[i]);
            }
            f=int_of(s[i]);
        }
        return sum;
}
int int_of(char c)
{
    switch (c)
    {
    case 'I':
        //vecstr.push_back(1);
        return 1;
        break;
    case 'V':
        //vecstr.push_back(5);
        return 5;
        break;
    case 'X':
        //vecstr.push_back(10);
        return 10;
        break;

    case 'L':
        //vecstr.push_back(50);
        return 50;
        break;

    case 'C':
        // vecstr.push_back(100);
        return 100;
        break;

    case 'D':
        // vecstr.push_back(500);
        return 500;
        break;

    case 'M':
        // vecstr.push_back(1000);
        return 1000;
        break;

    default:
        // vecstr.push_back(0); //not needed then remove
        return 0;
        break;
    }
}
   long int change_realstate(int n)
    {
        return (n * -1);
    }

    
};

int main()
{

    Solution _solP;
    long int convertednumber = 0;
    char ch;
    convertednumber = _solP.romanToInt("MCMXCIV");
    cout << "\nconvertednumber  : " << convertednumber << endl;
    cin >> ch;
    return 0;
}