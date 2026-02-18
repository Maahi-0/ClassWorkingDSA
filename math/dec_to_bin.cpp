#include<iostream>

using namespace std;

int decimal_number(int n){
    int ans =0;
    int power=1;
       while(n>0){
        int reminder=n%2;
        n=n/2;
        ans+=(reminder*power);
        power=power*10;
    }
    return ans;
}
        
int main(){

    int n=29;

    cout<<"the address of n is :"<<&n<<endl;
   
    cout<<"the binary conversion of "<<n<<" is: "<<decimal_number(n);
    return 0;
}