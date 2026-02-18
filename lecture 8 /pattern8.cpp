#include<iostream>
using namespace std;
int main(){

    int n=5;
    
     
    //outer loop
    for(int i = 1 ; i<n; i++){
          
        //spaces n-i-1
        for(int j=1; j<n-i ;j++){
            cout<<" ";
        }

        //num1 i to i+1

        for(int j=i ; j<=2*i-1 ;j++){
            cout<<j<<" ";
        }

        //num2 
        for(int j=2*i-2 ;j>=i ;j--){
            cout<<j<<" ";
        }
         cout<<endl;
    }
   

    return 0;
}