#include <iostream>
using namespace std;
 
void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void bubblesort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        bool isSwap=false;
        cout<<"outer loop";
        for(int j=0; j<n-i-1; j++){
            cout<<"inner loop";
            if(arr[j]>arr[j+1]) // for descending order <
            swap(arr[j], arr[j+1]);
            isSwap=true;
        }
        if(!isSwap){
            //array is already sorted
            return;
        }
    }
   
    print(arr,n);
    
}
int main(){
    int arr[5]={1,2,3,4,5};
    bubblesort(arr, 5);
    return 0;
}