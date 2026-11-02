#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int d1=n/100;

    int d2=(n%100)/10;

    int d3=((n%100)%10);

    cout<<d1<<" "<<d2<<" "<< d3<<endl;
    
    int k=d1*d1*d1+d2*d2*d2+d3*d3*d3;

    if(n==k){
        cout<<"n is a armstrong number"<<endl;
    }
    else{
        cout<<"n is not a armstrong number"<<endl;
    }
    return 0;
}