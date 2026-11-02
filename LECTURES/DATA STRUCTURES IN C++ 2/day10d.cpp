#include <iostream>
using namespace std;

 void printArr(int nums[]){
 
    cout<<sizeof(nums)<<endl;
   /* int n=sizeof(nums) / sizeof(int);

    for(int i=0; i<n; i++){
    cout<< nums[i]<<", " ;
   }  */
  }
int main(){
 
    int arr[]={1, 2, 3, 4, 5};
    
cout<< sizeof(arr)<<endl;
    printArr(arr);
    return 0;
}