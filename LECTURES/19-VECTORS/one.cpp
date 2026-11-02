#include <iostream>
using namespace std;

int* wow(){ // since no is a pointer int * is needed 
    int *no = new int ;
    *no = 1200 ;
    return no ; 
}

void func(){
    int size;
    cin>>size;
    int *ptr = new int[size];
    int x=1;
    for(int i=0; i<size; i++){
       ptr[i] = x;
       cout << ptr[i]<< " "; // *(ptr+i)
       x++ ;
    }
    delete[] ptr;
}

int main(){
    func();
    int *x = wow();  // causing memory leak 
    cout << *x <<endl;
    return 0;
}