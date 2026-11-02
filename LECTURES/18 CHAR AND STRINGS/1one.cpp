#include <iostream>
#include <string.h>
using namespace std ;

int main(){

    char ch ='f';
    int pos = ch - 'a';
    cout << pos << endl;

    char work[] = {'c', 'o', 'd', 'e', '\0'};
    char wow[15]= "how are you ?";
    cout << work << "   "<< wow << "  "<< strlen(wow) << endl;
    

    char sentance[30];
    cin >> sentance ;
    cout << sentance << endl;
    char sen[30];
    cin.getline(sen , 30, '@');
    cout << sen << "   "<< strlen(sen)<<endl;

    return 0;
}