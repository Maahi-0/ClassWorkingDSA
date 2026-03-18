#include<iostream>

using namespace std;

int linear_search(int a[] , int target ,int size){
    for(int i = 0 ; i< size ; i++){
        if(a[i]==target){
            cout<<"the target is found : ";
            return i;
        }
    }
    cout<<"not found";
}
int main(){
        int arr[5]={4,6,9,8,5};
        int target;
        int size=5;
        cout<<"enter the target value : "<<endl;
        cin>>target;
        cout<<linear_search(arr,target,size);


    return 0;
}