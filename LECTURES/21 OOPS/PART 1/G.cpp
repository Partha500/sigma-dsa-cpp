#include <iostream>
using namespace std;
class complex {
    int real ;
    int img ;
      public :
      complex(int r , int i){
        real =r ;
        img = i;
      }
      void showNum(){
        cout << real << "+"<< img <<"i"<<endl;
      }
      // operator overloading 
      complex operator + (complex &c2){
        int resreal = this -> real + c2.real ;
        int resimg = this -> img + c2.img ;
        complex c3(resreal , resimg);
        return c3;
      }

};
int main(){
    complex c1(1,2);
    c1.showNum();
    complex c2(3,4);
    c2.showNum();
    complex c3=c1 + c2 ;
    c3.showNum();
    return 0;
}