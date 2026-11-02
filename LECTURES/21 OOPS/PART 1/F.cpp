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
class mammal : public animal{
public :
string bloodtype ;
        mammal(){
            bloodtype = "warm ";
        }
};
class dog : public mammal {
    public : 
        void tailwag(){
            cout<< "dog waves its tail";
        }
};
int main(){
       dog d1;
       d1.eat();
       d1.tailwag();

}