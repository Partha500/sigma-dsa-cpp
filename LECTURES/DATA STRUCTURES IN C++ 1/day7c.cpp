#include <iostream>
using namespace std;

void oddeven(int a){
    if(a%2==0){
        cout<<"even" ;
    }
    else {
        cout<<"odd";
    }
}

bool iseven(int n){
    if(n%2==0){
        return true ;
    }
    else{
       return false ;
    }
}
int main(){
   int x;
   cin>>x;
   oddeven(x);

   cout<<iseven(7);
    return 0;
}