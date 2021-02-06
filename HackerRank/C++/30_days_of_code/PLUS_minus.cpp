#include<iostream>
#include<vector>
using namespace std;
// Complete the plusMinus function below.
void plusMinus(vector<int> arr)
{
   double posavg=0,negavg=0,zeroavg=0;

    double pos=0;
    double neg=0;
    double zero=0;

    double total_size=arr.size();
    cout<<"Total Size :"<<total_size<<endl;
    for(auto &num :arr){
        if(num>0){
            pos++;
        }
        else if (num==0)
        {
            zero++;
        }
        else
        {
            neg++;
        }
        
    }

posavg = (pos / total_size);

negavg = (neg / total_size);

zeroavg = (zero / total_size);

printf("%.6lf", posavg);

printf("\n%.6lf", negavg);

printf("\n%.6lf", zeroavg);
}

int main(){

    vector<int> vec = {-4, 3 ,- 9, 0 ,4 ,1};
    
    plusMinus(vec);
    return 0;
}