#include <iostream>
using namespace std;

int searchkey(int mat[][4], int n, int m){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
              if(mat[i][j]==10){
                return 10;
              }
              
        }
        
    }
    return -1;
}
int main(){

    int matrix[3][4]={{1, 2, 3, 4},
                     {5, 6, 7, 8 },
                     {9, 10, 11, 12 } };
                      
                     cout<< searchkey(matrix,3,4);

    return 0;
}