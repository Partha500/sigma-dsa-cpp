#include <iostream>
#include <string.h>

using namespace std;

int  rev(char str[], int n){
    int st=0, end = n-1;
    while(st < end){
        swap(str[st++], str[end--]);
        
    }
    return 1;
}
int  palcheck(char str[], int n){
     
     int left=0, right=n-1;
     while(left < right){
        if(str[left++] != str[right--]){
            return -1;
        }
     }
     return 1;
}

int main(){

    char word[30];
    cin.getline(word, 20);
    rev(word, strlen(word));
    cout << "reverse : " << word <<endl;

    char pal[30];
    cin >> pal;
    if(palcheck(pal, strlen(pal)) == -1 ){
        cout << "not palinrome "<<endl;
    }
    else{
        cout << "palindrome"<<endl;
    }
    
return 0;
}