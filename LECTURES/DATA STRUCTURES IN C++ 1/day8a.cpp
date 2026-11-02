#include <iostream>
using namespace std;

void bintodec(int binnum){
    int n=binnum;
    int decnum=0;
    int pow=1;
    while(n>0){
        int lastdig=n%10;
        decnum+=lastdig*pow;
        pow*=2;
        n/=10;
    }
cout<<decnum;
}

void dectobin(int decnum){
    int n=decnum;
    int binnum=0;
    int pow=1;
    while(n>0){
        int rem=n%2;
        binnum=binnum+rem*pow;
        pow=pow*10;
        n=n/2;
    }
    cout<<binnum;
}
int main(){
    // bintodec(1010);
    dectobin(16);
    // cout<< sizeof(long long);
    return 0;
}