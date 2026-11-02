#include<iostream>
using namespace std;
int set_ith_bit(int num, int i){
    int bitmask = 1<<i ;
    return (num | bitmask) ;
}
int clear_ith_bit(int num, int i){
    int bitmask = ~(1<<i) ;
    return (num & bitmask);
}
int main(){
    int num,i,j;
    cin>>num;
    cin>>i;
    cin>>j;
    cout<<set_ith_bit(num,i)<<endl;
    cout<<clear_ith_bit(num,j)<<endl;
    return 0;
}
