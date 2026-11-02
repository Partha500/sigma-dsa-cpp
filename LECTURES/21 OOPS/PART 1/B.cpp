#include <iostream>
using namespace std;

class Car {
private :
string name ;
string color ;

public :
      Car(){
        cout<<"non parameterized constucter"<<endl;
      }  
      // parameterized constructer
      Car(string namevalue , string colorvalue){
        cout << "constructor is called . object being created...\n";
        cout << "constructer with params" << endl;
        this -> name = namevalue;
        color = colorvalue ;

      }

      void start(){
        cout << "car has started..\n";
      }
      void stop(){
        cout << "car has stopped\n";
      }

      // getters 
      string getName(){
        return name ;
      }
      string getColor(){
        return color ;
      }
};

int main(){
    Car c0;
    Car c1("innova","blue");
    cout << c1.getName()<<endl;
    cout << c1.getColor()<<endl;
    Car c2("maruti 800", "white");

    return 0;

}