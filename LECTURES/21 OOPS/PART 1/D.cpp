#include<iostream>
using namespace std;

class Car{
public:
      string name ;
      string color ;
      int *mileage;
      int *speed ;

      Car(string name, string color){
        this -> name = name ;
        this -> color =color;
        mileage = new int ; // dynamically allocation  
        *mileage =12;
        speed = new int ;
        *speed = 100;
      }
      Car (Car &original){
        name = original.name;
        color = original.color ;
        mileage = original.mileage;
        speed = new int ;
        *speed = *original.speed ;
      }

      ~Car(){
        cout <<"deleting object "<<endl;  // 12 
        if(mileage != NULL){
            delete mileage ;
            mileage = NULL ;
        }
        if(speed != NULL){
            delete speed ;
            speed = NULL ;
        }
        
      }
};
int main(){
    Car c1("wow","blue");
    Car c2(c1);
    cout << c2.name << endl<<c2.color << endl << *c2.mileage<< endl << *c2.speed <<endl;
    *c2.mileage =9;
    *c2.speed = 0 ;
    cout << *c1.mileage << endl << *c1.speed <<endl;
    return 0;
}