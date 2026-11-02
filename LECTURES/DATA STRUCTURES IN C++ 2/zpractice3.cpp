#include<iostream>
#include<climits>
#include<algorithm>

using namespace std ;

void subarr(int arr[], int n){
      int maxsum = INT_MIN;
      int currsum =0 ;
      for (int i=0; i<=5;i++){
         currsum = 0;
        for(int j=i; j<n;j++){
       currsum = currsum + arr[j];
       maxsum = max(maxsum , currsum );
    
      }
      
}
cout << maxsum <<endl;
}
int main(){
    int a[6]={2, -3, 6, -5, 4, 2};
    int n=6;
    
        subarr(a,n);
    
return 0;
}
