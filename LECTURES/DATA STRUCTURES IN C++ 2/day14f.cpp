#include <iostream>
using namespace std;

int searchkey(int mat[][4], int n, int m){

   int k =10 ;
   int r=0, c=m-1;
   int st=mat[r][c];

   while(r<n && c>=0){
   if(st == k) {
    return k ;
   }
   else if(st > k){
      st=mat[r][c-1];
      c-- ;
   }
   else {
    st = mat[r+1][c];
    r++ ;
   }
}

    return -1 ;
}

int main(){

    int matrix[3][4]={{1, 2, 3, 4},
                     {5, 6, 7, 8 },
                     {9, 10, 11, 12 } };
                      
                     cout<< searchkey(matrix,3,4);

    return 0;
}