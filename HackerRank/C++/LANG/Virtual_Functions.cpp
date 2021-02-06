#include <cmath>
    #include <cstdio>
    #include <vector>
    #include <iostream>
    #include <algorithm>
using namespace std;
int seq_idP = 0;
int isiP()
{
    return seq_idP++;
}
int seq_idS = 0;
int isiS()
{
    return seq_idS++;
}
class Person
{
public:
    string name;
    int age;
    virtual void getdata() =0;
    virtual void putdata()=0;

};


class Professor :public Person
{
     int s_i = isiP();
    int pub,cur_id=s_i;
    public :
    void getdata()
    {
        cin>>name>>age>>pub;
    }
    void putdata()
    {
        cout<<name<<" "<<age<<" "<<pub<<" "<<cur_id<<endl;
    }

};
class Student:public Person
{

    int cur_Id=isiS();
    vector<int>marks;
    public :
            void getdata()
            {
                cin>>name>>age;
                for(int i=0;i<6;i++)
                {
                    int temp;
                    cin>>temp;
                    marks.push_back(temp);
                }

            }
            void putdata()
            {
                int sum = 0;
                for(auto &i : marks)
                {
                    sum+=marks[i];
                }
                cout<<name<<" "<<age<<" "<<sum<<""<<cur_Id<<endl;
            }
};

int main()
{

    int n, val;
    cin >> n; //The number of objects that is going to be created.
    Person *per[n];

    for (int i = 0; i < n; i++)
    {

        cin >> val;
        if (val == 1)
        {
            // If val is 1 current object is of type Professor
            per[i] = new Professor;
        }
        else
            per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.
    }

    for (int i = 0; i < n; i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;
}
