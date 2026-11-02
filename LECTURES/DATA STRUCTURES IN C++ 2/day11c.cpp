#include <iostream>
#include <climits>
using namespace std;

void maxsumSubarray2(int *arr, int n){
    int maxsum=INT_MIN;
    for(int start=0; start<n; start++){ //start=2
        int currsum=0;
        for(int end=start; end<n; end++){ // end=2, 3, 4, 5
           currsum+=arr[end];
            maxsum=max(maxsum, currsum); 
        }
    
    }
    cout<< "maximum subarray sum : " <<maxsum;
}
int main(){
    int arr[6]={2, -3, 6, -5, 4, 2 };
    int n=sizeof(arr) / sizeof(int);
maxsumSubarray2(arr,n);
    return 0;
}