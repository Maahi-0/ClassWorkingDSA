#include<iostream>
using namespace std;
int main(){

    int n=5;
    
     
    //outer loop
    for(int i = 1 ; i<=n; i++){
          
        //spaces n-i-1
        for(int j=n; j>=1 ;j--){
          if(i==j){
            cout<<"* ";
          }else{
            cout<<j <<" ";
          }
        }
        cout<<endl;
    }
   

    return 0;
}