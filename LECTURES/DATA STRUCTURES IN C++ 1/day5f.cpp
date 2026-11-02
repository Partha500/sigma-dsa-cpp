#include <iostream>
using namespace std;
int main(){
    //checking of prime number 
    /* 
    int n;
    cin>>n;
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            cout<<" not prime";
            break;
        }
       if(n%i!=0){
        cout<<"yes";
        break;
       }
        } */
        
    //q4
int n;
cin>>n;
for(int i=2;i<=n-1;i++){
    if(n%i!=0){
        cout<< n;
    }
}
    return 0;
}