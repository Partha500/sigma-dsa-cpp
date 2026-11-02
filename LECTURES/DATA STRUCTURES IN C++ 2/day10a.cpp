#include <iostream>
using namespace std;
int main(){ 
     
      int marks[5]={1, 5, 6, 8, 3};
      int len=sizeof(marks)/sizeof(int);
      for(int idx=0;idx<len;idx++){
       cout<<marks[idx]<<"\n";
      }
  
    return 0;
}