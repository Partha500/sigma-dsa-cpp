#include <iostream>
#include <string.h>
using namespace std;
int main(){

    char word[100];
    cin >> word;
    for(int i=0; i<strlen(word) ; i++ ){
       if('a' <= word[i] && word[i] <= 'z'){
        word[i] -= 32 ;
       }
    }
    cout << word; 
    return 0;
}