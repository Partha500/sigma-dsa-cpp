#include<iostream>
#include<climits>
#include<algorithm>

using namespace std ;

void subarr(int arr[], int n, int i){
      int maxsum = INT_MIN;
      for(int j=i; j<n;j++){
        int subsum=0;
        for (int k=i; k<=j;k++){
            subsum = subsum + arr[k];
        }
        maxsum = max(maxsum, subsum);
      }
      cout << maxsum << endl;
}
int main(){
    int a[6]={2, -3, 6, -5, 4, 2};
    int n=6;
    for(int i=0; i<=5; i++){
        subarr(a,n,i);
    }
return 0;
}
