#include<iostream>
using namespace std;
int main(){

    int n=4;
    int m= 0;

    for(int i =  1; i<= n ; i++){
        for(int j = 1 ; j <= n -i ; j++){
            cout<<" \t";
        }
        for(int  k =1 ; k <= 2 * i-1 ; k++){
            cout<<m<<"\t";    
            m++;        
        }
        cout<<endl;
    }
    
     
    return 0;
}