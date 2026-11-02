#include <iostream>
#include <climits>
using namespace std;

void maxProfit(int *prices, int n ){
    int bestbuy[100000];
  bestbuy[0] =INT_MAX;
  
  for(int i=1; i<n; i++){
    bestbuy[i]= min(bestbuy[i-1], prices[i-1]);
    
  }
  int maxprofit=0;
  for(int i=0; i<n; i++){
    int currprofit=prices[i]-bestbuy[i];
    maxprofit= max(maxprofit, currprofit);
    cout << currprofit << "wow" << "  ";
    cout << maxprofit <<"yes "<<"  ";
  }
  cout<< "max profit will be : "<<maxprofit <<endl;
}

int main(){
    int prices[7]={3, 11, 1, 5, 3, 6, 4};
    int n=sizeof(prices) / sizeof(n);
maxProfit(prices, n);
    return 0;
}
// Time complexicity = O(2n)