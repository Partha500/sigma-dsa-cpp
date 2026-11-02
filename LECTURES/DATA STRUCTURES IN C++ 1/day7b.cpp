#include <iostream>
using namespace std;
 
int sum(int a, int b){
    int sum=a+b;
    return sum;
}
int main(){
 
 int s=sum(2,4); // 2 and 4 are arguments
 cout<<s<<"\n";
 
 cout<<sum(2,4)<<endl;
    return 0;
}