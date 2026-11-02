#include <iostream>
using namespace std;
# define ll long long  // macros -- can be used to define tings preliminary 
int main(){
ll X=34;

// implicit conversion
cout<<10/3<<endl;//3
cout<< 10/3.0<<endl; // 3.3333

//explicit conversion
 cout << ((float)10/3) <<endl; //3.33 this makes 10 float so the whole vale get float 
 cout << (char)('A'+ 2)<<endl; // this makes the whole vale char 
 
 // question
 cout << (bool)5+3; // 4 

 // operators 
 //assignment 
 
 
    return 0;
}