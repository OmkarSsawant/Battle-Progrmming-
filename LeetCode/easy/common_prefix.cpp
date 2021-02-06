#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution
{

    string prefix = "";

    int j = 0;

public:
    string longestCommonPrefix(vector<string> &strs)
    {
        if (strs.capacity() == 0)
            return "";
        bool is_prefix = false;

        string tocom = minlength_str(strs);
        for (int i = 0; i < tocom.length(); i++)
        {
            for (string str : strs)
            {
                if (str.substr(0, i) == tocom.substr(0, i))
                {
                    is_prefix = true;
                }
                else
                {
                    is_prefix = false;

                    break;
                }
            }
            if (is_prefix)
            {
                prefix = tocom.substr(0, i);
                is_prefix = false;
            }
        }
        return prefix;
    }
    string minlength_str(vector<string> &vs)
    {
        string smstr = "";

        string  firststr = vs.at(0);
        int min = firststr.length();
       // cout<<min;
        for (string str : vs)
        {

            if (min > str.length())
                min = str.length();
        }
        for (string str : vs)
        {
            if (min == str.length())
                smstr= str;
        }
        return smstr;
    }
};
int main()
{
    Solution s;
    string str = "1234567";
    cout << str.length() << "\n";
    vector<string> strs = {"flower", "flow", "floght","flog","flgged"};

    str = s.minlength_str(strs); //s.longestCommonPrefix(strs);

    cout << "PREFIX STRING :" << str;
    return 0;
}