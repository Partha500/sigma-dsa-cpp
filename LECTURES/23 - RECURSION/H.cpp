#include <iostream>
#include <vector>
using namespace std;

int power(int x, int n){

    if(n ==0){
        return 1 ;
    }
   
   //  x ^ n/2;
    int halfpower = power(x, n/2);
    int halfpowsq = halfpower * halfpower;
    if (n %2 != 0){
        return x* halfpowsq; 
    }
    return halfpowsq;

}

int main(){

    int x , n ;
    
    cout << power(2,5);
    return 0;
}