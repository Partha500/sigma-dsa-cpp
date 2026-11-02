#include <iostream>
#include <cmath>
using namespace std ;
int main(){
     // prime number check 
     int n;
     cin>>n;
     bool isprime=true;
     for(int i=2;i<=n-1;i++){      // i<=sqrt(n)
        if(n%i==0){
            isprime=false;
            break;
        }
        
     }
     if(isprime==true){ // isprime==true or isprime 
            cout<<"number is prime ";
        }
        else{
            cout<<"not prime";}
    return 0;
}