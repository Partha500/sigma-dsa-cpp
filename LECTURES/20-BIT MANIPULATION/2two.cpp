#include<iostream>
using namespace std;

int getith_Bit(int num, int pos){
    if(!(num & (1<<pos))){  // bitmask = 1 << pos 
        return 0;
    }else {
        return 1;
    }
}
int main(){
    int num, pos;
    cin>>num;
    cin>>pos;
    cout<< getith_Bit(num,pos);
    return 0;
}