#include <iostream>
#include <cmath>
using namespace std ;
int main(){
  //q1 
   /* int n;
    cin>>n;
    int fact=1;
    for( n;n>0;n--){
        fact=fact*n;
    }
    cout<<fact; */

//q2
/* int n;
cin>>n;
for(int i=1;i<=10;i++){
    cout<<n<<"*"<<i<<"="<<n*i<<endl;
} */ 

//q3 armstrong number
int n;
cin>>n;
int num=n; // here we create num beacuse n will change in while loop so cant use for if statement thats why 
int cubesum=0;
while(n>0){
    int lastdig=n%10;
    cubesum+=lastdig*lastdig*lastdig ;
    n/=10;
}
if(num==cubesum){
    cout<<"armstrong no";
}
else{
    cout<<"not";
}
    return 0;
}