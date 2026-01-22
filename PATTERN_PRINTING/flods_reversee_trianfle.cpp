#include<iostream>
using namespace std;
int main(){

   int n=4;
   // cout<<"enter the value of n :";
   // cin>>n;
  int num=1;
   for(int i = 0 ; i<n; i++){
     for(int j = 0 ; j<i+1; j++){
        cout<<num ;
        num+=1;
      
     }
     cout<<endl;
   }
cout<<endl<<endl;
  
   for(int i = 0 ; i<n; i++){
    for(int k = 0 ; k<i ; k++){
        cout<<" ";
    }
    for(int j = 0 ; j<n-i ; j++){
        cout<<i+1;
    }

    cout<<endl;
   }
cout<<endl<<endl;
return 0;
}
