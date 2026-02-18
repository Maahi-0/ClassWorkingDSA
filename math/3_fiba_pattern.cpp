#include <iostream>
using namespace std;

int fib(int n){
    if(n == 0 || n == 1)
        return n;
    return fib(n-1) + fib(n-2);
}

int main(){
    int n = 5;
    int m = 0;
  for(int i = 1 ; i <=n ; i++){
    for(int j = 1 ; j<= i ;j++){
    cout<<fib(m)<<" ";
    m++;
    }
    cout<<endl;
  }
    return 0;
}
