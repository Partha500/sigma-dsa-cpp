#include <iostream>
using namespace std;
int main(){
    int arr[5]={5, 4, 3, 9, 2} ;
    int max =arr[0];
    int min=arr[0];
    int i=0;
    while(i<5){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    i++;
    }
cout<< max;
cout<<min;
    return 0;
}