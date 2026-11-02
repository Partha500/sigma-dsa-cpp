#include <iostream>
using namespace std ;

void print(int n){
    if(n==0){
        return;     // immportant to know you can do this 
    }
    cout << n << " " ; // kaam 
    print(n-1); // func call // if reverse then increasing order happen 
}


int main(){
     
    print(5);
    return 0;
}