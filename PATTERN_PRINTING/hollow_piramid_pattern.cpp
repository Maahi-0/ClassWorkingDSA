#include<iostream>

using namespace std;
int main(){

    int n;
    cout<<"enter the value of n: ";
    cin>>n;
        
    for(int i = 0 ; i<n ; i++){
            //spaces n-i-1
           for(int j = 0 ; i<n-i-1; j++){
            cout<<" ";
           }
            cout<<"* ";
            //spaces 2*i+1

            if(i!=0){
                for(int j = 0 ; j<2*i-1;j++){
                    cout<<" ";
                }
                  cout<<"* ";
            }
            cout<<endl;
    }

    return 0;
}