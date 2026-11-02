#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;

int profit(int arr[], int n){
    int maxprofit=0;
    for(int i=0; i<n; i++){
        int currpro=0;
        for(int j=n-1; j>=i;j--){

            currpro = arr[j]-arr[i];
            maxprofit =max(maxprofit , currpro);
            currpro=0;

        }
    }
    cout << maxprofit ;
}
int main(){
    int arr[6]={7, 1, 5, 3, 6, 4 };
    int n = sizeof(arr)/sizeof(int);
    profit(arr, n);
}