#include <iostream>
using namespace std;

class Student {
    // properties 
    // can write private here like public 
    // by default if not public everything becomes private

   string name;
   public:
   float cgpa ;
   string Profile;

   //methods :  functions in class
   void getpercentage(){
      cout << (cgpa * 10 ) << "% \n";
   }
   void editProfile(string  newProfile){
      newProfile = Profile;
   }

   // setters 
   void setName(string nameval){
    name=nameval;
   }
   // getters 
   string getName(){
    return name;
   }
};
int main(){
    Student s1 ; //  1st object 
    cout << sizeof(s1) <<endl;
    Student s2; // 2nd object 
    // s1.name showing error since name is private 
    s1.cgpa = 9;
    s1.getpercentage();
    s2.setName("Partha");
    cout << s2.getName() << endl;
    return 0;
}