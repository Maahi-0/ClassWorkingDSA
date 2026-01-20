#include<iostream>
using namespace std;
int main(){

   int n;
   cout<<"enter the value of n :";
   cin>>n;

   for(int i = 1 ; i<= n; i++){
     char ch='A';
     for(int j = 1 ; j<=n ; j++){
        cout<<ch <<" " ;
        ch+=1;
     }
     cout<<endl;
   }

   cout<<endl<<endl;
      int nu=1;
   for(int i = 1 ; i<= n; i++){
     for(int j = 1 ; j<=n ; j++){
        cout<<nu<<" ";
        nu++;
     }
     cout<<endl;
   }
   cout<<"after pattern : "<<nu;


    return 0;
}