#include <iostream>
#include <climits>
using namespace std;
void maxsumarray(int *arr, int n){
    int currsum=0;
    int maxsum=INT_MIN;
 for(int i=1; i<n; i++){
    currsum+=arr[i];
    maxsum=max(currsum, maxsum);
    if(currsum<0){
        currsum=0;
    }
 }   
 cout<<maxsum;
}
int main(){
    int arr[]={2, -3, 6, -5, 4, 2};
    int n=6;
    maxsumarray(arr, n);
    return 0;

}