#include <iostream>
using namespace std ;
int main(){

    int a[5]={1,2 , 3, 4,6};
    int l=0, r=4;
    int mid=(l+r)/2;

    while ( l <mid){
        int p =a[l];
        int q=a[r];
        a[l]=q;
        a[r]=p;
        l++;
        r--;
    }
    for(int i =0; i< 5;i++){

      cout<<a[i]<<" ";

      }
      return 0;
}