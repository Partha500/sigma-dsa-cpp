#include <iostream>
#include <vector>
using namespace std;

int first_occurence(vector<int> arr,  int i, int t){

    if(i==arr.size()){
    return -1;
    }
    if(arr[i] == t){
        return i;
    }

    return first_occurence( arr,  i+1, 3);
}

int main(){
    vector<int> arr= {1,2,4,3,3,5};
    int t = 3;
    cout << first_occurence(arr, 0, 3);
    return 0;
}