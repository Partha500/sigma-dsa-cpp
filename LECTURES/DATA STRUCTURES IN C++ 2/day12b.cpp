#include <iostream>
using namespace std;
int main(){

    const char buttons[4][4]={
        {'1', '2', '3', '4'}
    };
    for(int i=0;i<4; i++){
        for(int j=0; j<4; j++){
            cout<<buttons[j];
        }
        cout<<endl;
    }
    return 0;
}