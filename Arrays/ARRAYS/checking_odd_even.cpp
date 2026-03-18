#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the range : "<<endl;
    cin>>n;

    for(int i =1; i <= n ;i++){
        if( i%2==0){
            cout<<"e";
        }else{
            cout<<"o";
        }
    }
    return 0;
}