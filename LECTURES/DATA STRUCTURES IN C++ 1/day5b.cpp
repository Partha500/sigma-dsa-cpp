#include <iostream>
using namespace std;
int main(){
    /*int n=10829;
     
     int sum=0;
     
     while(n>0){
        int lastdig=n%10;
        cout<<lastdig<<" ";
       sum+=lastdig;
        n=n/10;
    }
    
cout<<sum<<" ";
 cout<<n; */

/*int n=10829;
     
     int sum=0;
     
     while(n>0){
        int lastdig=n%10;
        if(lastdig%2!=0){
   sum+=lastdig;
        }
        
        n=n/10;
     }
    
cout<<sum<<" "; */
int n=10829;
int sum=0;
while(n>0){
    int lastdig=n%10;
    sum=sum*10+lastdig;
    n=n/10;
}
cout<<sum;
//do while 
int i=1;
do{
    cout<<"hello" <<endl;;
    i++ ;
}while(i<=3);
    return 0;
}