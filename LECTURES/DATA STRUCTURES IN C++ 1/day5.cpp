#include <iostream>
using namespace std;
int main(){

    int num ; 
    for(num=1;num<=5;num++){ //    for(int num=1;num<=5;num++) if we write num here without writing int num; in upper last value wont get print error will show . 
        cout<<num<<endl;
    }
    cout<<"last value of num : "<<num; //6 beacuse though loop didnot run to 6 condition fail value 6 get assigned to num
    return 0;
}