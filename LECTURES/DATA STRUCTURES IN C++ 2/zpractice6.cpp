#include<iostream>
#include<climits>

using namespace std;
int main(){

    int arr[5]={2,4,1,6,5};
    int min=INT_MAX;
    for(int j=0; j<5; j++){
    for(int i=j; i<5; i++){
       
        if(arr[i]<min){
            min = arr[i];
        }
    }
    arr[j]=min;
}
for(int k=0; k<5;k++){
    cout<<arr[k]<<" ";
}
    return 0;
}