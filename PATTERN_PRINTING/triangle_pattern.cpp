#include<iostream>
using namespace std;
int main(){

   int n=4;
   // cout<<"enter the value of n :";
   // cin>>n;

   for(int i = 1 ; i<= n; i++){
     for(int j = 1 ; j<=i ; j++){
        cout<<"* " ;
      
     }
     cout<<endl;
   }
cout<<endl<<endl;
for(int i = 0; i< n; i++){
     for(int j = 0 ; j<i+1 ; j++){
        cout<<i+1;
    
      
     }
     cout<<endl;
   }

   cout<<endl<<endl;
for(int i = 0; i< n; i++){
    int num=1;
     for(int j = 0 ; j<i+1 ; j++){
        cout<<num;
        num+=1;
    
      
     }
     cout<<endl;
   }
   return 0;
}
