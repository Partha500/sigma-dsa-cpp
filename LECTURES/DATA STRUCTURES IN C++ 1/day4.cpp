#include <iostream>
using namespace std;
int main(){

    //conditional statements 
    cout << "enter your age : "<<endl;
    int age;
    cin>> age;
    if(age>=18){
        cout<< "can vote " <<endl;
    }
    
    else{
        cout<< "cant vote ";
    }
    if(age>=100){
        cout<<"senior citizen";
    }
    // odd even 
    int num ;
    cin>> num;
    if(num%2==0){
        cout<<"EVEN"<<endl;
    }
    else{
        cout<<"ODD"<<endl;
    }
    // income tax calculator 
    int ic;
    cin>> ic;

    if(ic<500000){
        cout<<ic<<endl;
    }
    else if(ic>=500000 && ic<=1000000){
        cout<< (ic - 0.2*ic)<<endl;
    }
    else if(ic>1000000){
        cout<<(ic-.3*ic)<<endl;
    }
    else{
        cout<< "invalid income "<<endl;
    }
    // ternary operators --> same function as if else .can be used for small two type things 
    int n;
    cin>>  n ;
    bool even=n%2==0 ? true : false ;
cout<<even ;
    return 0;
}