#include <iostream>
using namespace std;
int main(){

    // building a calculator using switch
    int a,b;
    cin>>a>>b;
    char op;
    cout<<"enter operator :"<<endl;
    cin>>op;
    switch(op){
        case '+': cout<<a+b<<endl;
        break;
        case '-': cout<<a-b<<endl;
        break;
        case '*': cout<<a*b<<endl;
        break;
        case '/': cout<<a/b<<endl;
        break;
default : cout<<"invalid operation"<<endl;
    }
return 0;
}
