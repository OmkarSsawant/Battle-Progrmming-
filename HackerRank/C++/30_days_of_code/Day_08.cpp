
	/*
	map<string, long int> pd;
	//vector<string> sb;
	bool e=true;
	 Enter your code here. Read input from STDIN. Print output to STDOUT 
	int n;
	cin >> n;
	if (n >= 1 && n <= pow(10, 5))
	{
		for (int i = 0; i < n; i++)
		{
			string name;
			long int phone;
			cin >> name >> phone;
			pd.insert(pair<string, long int>(name, phone));
		}
	
	}
	
	//sol 1
	{
		for (int i = 0; i < n; i++)
		{
			string sr;
			cin >> sr;
			//sb.push_back(sr);
			//Another way by count() function
			if (pd.count(sr) > 0)
			{
				cout << sr << "=" << pd[sr];
			}
		}
	}
	..sol 2
		 	map<string, long int>::iterator p ;//3 TEST CASE FAIL BECAUSE OF TIME-COMPLEXITY (here>>>	O(N^2))
		vector<string>::iterator it ;

		
			for (it = sb.begin(); it != sb.end(); it++)
			{
				e = true;
				for (p = pd.begin(); p != pd.end(); p++)
				{
					if (*it == p->first)
					{
						cout << p->first << "=" << p->second << endl;
						e = false;
					}
				}
				if (e)
				{
					cout << "Not found " << endl;
				}} 
*/
														//worked;
#include <iostream>
#include <map>
	using namespace std;
	int main()
	{
		int i, n;
		cin >> n;
		string name, number, key;
		map<string, string> phone_dir;
		for (i = 0; i < n; i++)
		{
			cin >> name >> number;
			phone_dir.insert(pair<string, string>(name, number));
		}
		while (cin >> key)
		{
			auto res = phone_dir.find(key); //res of type iterator of  phone_dir 
			if (res != phone_dir.end())
			{
				std::cout << key << "=" << res->second << std::endl;
			}
			else
			{
				std::cout << "Not found" << std::endl;
			}
		}

		return 0;
	}
