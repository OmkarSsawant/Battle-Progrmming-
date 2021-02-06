#include<iostream>

using namespace std;
 //  =========== ------------  Generic function  --------------  ==================
template<typename T >

T getT(T a){
    return a;
}
double getTD(double d){
    return d;
}
//=======================     Generic Class     ==============================
template<class G>
class  GenericC{
    public:
    G getG(G gen){
        return gen;
    }

};
int main(){
    int n=10;
    double f=10.5;
    cout<<getT(n)<<endl;
    cout<<getT(f)<<endl;
    cout<<getT("string")<<endl;
    GenericC<double>gc;
    cout<<gc.getG(3.4);
    return 0;
}