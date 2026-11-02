#include<iostream>
using namespace std;

void OddEven(int num){
    if(!(num & 1)){
       cout<<"even" ;
    }else{
        cout<<"odd";
    }
}
int main(){

    int num;
    cin>>num;
    OddEven(num);
    return 0;
}