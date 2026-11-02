#include <iostream>
using namespace std;

bool isprime(int n){
    if(n==1){
        return false;
    }
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            return false ;
        }
    }
    return true;
}
void allprime(int n){
    for(int i=2;i<=n-1;i++){
        if(isprime(i)==1){  // true
        cout<< i<<"  " ;
        }
}
}
int main(){
    int x;
    cin>>x;
    allprime(x);
    return 0;
}