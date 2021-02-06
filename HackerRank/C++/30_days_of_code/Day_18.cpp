#include <iostream>
#include<stack>
#include<queue>

using namespace std;

class Solution
{
    stack<char> s;
    queue<char> q;

public:
    void pushCharacter(char ch)
    {
        if(ch>=97&&ch<=122)
        s.push(ch);
    }
    void enqueueCharacter(char ch)
    {
        if (ch >= 97 && ch <= 122)
            q.push(ch);
    }
    char popCharacter()
    {
        char temp=s.top();
        s.pop();
        return temp;
    }
    char dequeueCharacter()
    {
        char temp = q.front();
        q.pop();
        return temp;
    }

    //Write your code here
   
};
