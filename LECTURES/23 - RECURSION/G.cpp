#include <iostream>
#include <vector>
using namespace std;

int lastOccur(vector<int> arr , int i, int target){

    if(i==arr.size()){
        return -1 ;
    }
    int indx = lastOccur(arr, i+1, target );
    
    if( indx == -1 && arr[i]== target ){
         return i;
    }
    return indx;

}

int main(){
    vector<int> arr = {1, 2, 3, 3, 3, 5};
    cout << lastOccur(arr, 0, 3);
    return 0;
}