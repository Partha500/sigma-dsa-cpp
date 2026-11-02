#include <iostream>
using namespace std ;
int main(){
    int a=10;
    cout<< &a<<"\n" ;
    float b=3.14;
    float *ptr1=&b;
    float **ptr2=&ptr1;
    cout<< &b << "="<< ptr1<<"\n";
    cout<<sizeof(ptr1)<<"\n";
    cout<<ptr2<<"="<< &ptr1<<"\n";
    *ptr1=20;
    cout<<b<<"\n";
    int c=5;
    cout<<&a<<"   "<< *(&a)<<"\n";

    return 0;
}