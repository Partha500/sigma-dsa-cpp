#include <iostream>
using namespace std;

void func1(int arr[]){
    arr[0]=100;
}
void func2(int *ptr){
    ptr[1]=200; // mind it you can write it this way too
}

int main(){
 
     int arr[]={5, 4, 3, 2, 1};
     func1(arr); // passing array name is equivalent to passing the pointer 
     func2(arr);
     cout << arr[0]<<endl; 
     cout<< arr[1]<<endl;
    return 0;
}