#include <iostream>
using namespace std;
int main(){
    int a=5;
    int *ptr1=&a;
    int *ptr2=ptr1+3; // 12 bytes of space is there between ptr1 and ptr2
    cout<<ptr1<<endl;
    cout<<ptr2<<endl;
    cout<<sizeof(ptr1)<<endl;
    cout<<ptr2-ptr1<<endl; // 3 bytes

    int arr[]={1, 2, 3, 4, 5};
    int *ptr3=arr;
    cout<<*ptr3<<endl;
    int *ptr4=ptr3+3;
    cout<<*ptr4<<endl;
    cout<<ptr4-ptr3<<endl;
    return 0;
}