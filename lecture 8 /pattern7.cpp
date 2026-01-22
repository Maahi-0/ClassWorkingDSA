#include<iostream>
using namespace std;
int main(){

    int n=5;
    
     
    //outer loop
    for(int i = 0 ; i<n; i++){
          
        //spaces n-i-1
        for(int j=0; j<n-i-1 ;j++){
            cout<<" \t";
        }

        //num1 i to i+1

        for(int j=1 ; j<=i+1 ;j++){
            cout<<j<<"\t";
        }

        //num2 
        for(int j=i ;j>0 ;j--){
            cout<<j<<"\t";
        }
         cout<<endl;
    }
   

    return 0;
}