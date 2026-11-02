#include <iostream>
using namespace std;
int main(){
     /*int i=1 ;
    while(i<=10){
        if(i==4){
            break; 
        }
            
        cout<<i;
        i++ ;
         
   
} */
int n;

while(n%10!=0){
   
cin>>n;
 if(n%10==0){
        break;
    }
    cout<<"entered number "<<n ;
}
 return 0;
}