#include <iostream>
using namespace std;

void myhello(){
    cout<<"Hello :) "<<endl;
}

void assistant(){
    myhello();
    cout<<"work done\n";
}
void gogo(); // just declaring a function

int main(){
   //   myhello();  // void function call
assistant();

gogo();
    return 0;
}

void gogo(){
    cout<<"nice " ;
}