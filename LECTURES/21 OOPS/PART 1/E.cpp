#include<iostream>
using namespace std;

class animal {
public  : 
        string color ;
        void eat(){
            cout<<"eats"<<endl;
        }
        void breath(){
            cout << "breathing "<<endl;
        }
};
class fish : private  animal{
public :
         void swim(){ // during protected inside derived class we can access protected oones but not in main function or outside ones 
           
            cout << "swims "<<endl;
         }
};
int main(){
    fish f ;
   // protected thats why 
    f.swim(); 
    return 0; 
}