#include <iostream>
#include <iomanip>
using namespace std;
int main(){

    //difference between float and double . can n=be seen in bigvalues .
    float x=3.1234567898;
    double y=3.1234567898;
    cout<<x <<"   "<<y<<endl;
    cout<<setprecision(12)<<x<<endl;
    cout<<setprecision(12)<<y<<endl;

    
    return 0;
}