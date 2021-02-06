#include <vector>
#include <string>
#include <iostream>
#include <sstream>

using namespace std;

vector<int> parseInts(string str)
{
    vector<int> vec;
    int n;
    stringstream ss(str);
    char ch = ',';
    while (ss >> n)
    {
        vec.push_back(n);
        ss >> ch;
    }
    return vec;
}

int main()
{
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for (int i = 0; i < integers.size(); i++)
    {
        cout << integers[i] << "\n";
    }

    return 0;
}
