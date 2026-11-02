#include <iostream>
using namespace std;

void printArr(int nums[], int n){
    for(int i=0; i<n; i++){
        cout<< nums[i]<<", " ;
    }
}
int main(){
    int arr[]={5, 4, 3, 2, 1};
    int n=sizeof(arr) / sizeof(int);

    printArr(arr, n);
    return 0;
}