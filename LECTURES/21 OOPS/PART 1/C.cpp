#include<iostream>
using namespace std;
 
class User{
private:
     int id;
     string password;
public:
    string username;

    User(int newid){
       this ->  id= newid;
    }
    // custom cpy constructor 
    User (User &original){   // original means A 
        cout << "copying .. \n";
        username = original.username;
        password = original.password;
    }
    //setter
    void setPasswd(string passwd){
    password =passwd ; // or can use this -> password = password 
    }
    //getter
    string getPasswd(){
    return password;
    }
};
int main(){
    User A(8);
    A.username = "Partha";
    A.setPasswd("abcd");
    cout << A.username << "   " << A.getPasswd()<<endl;
    User B(A);
    cout << B.username <<endl;
    cout << B.getPasswd()<<endl;
    return 0;

}