#include<iostream>

using namespace std;

int main(){

    int arr[5];
    int size=5;
     int small=arr[0];
     int large=arr[0];
    //initialization 
    for(int i = 0 ; i< size ; i++){
        cout<<"enter the "<<i+1<<"th index of the array : "<<endl;
        cin>>arr[i];
    }
    //display
    for(int i = 0 ; i< size ; i++){
        cout<<"the "<<i+1<<"th index of the array is : "<<arr[i]<<endl;
    if(small>arr[i]){
        small=arr[i];
    }
    if(large<arr[i]){
        large=arr[i];
    }
    }

   //find smallest and largest element
   cout<<"largest value in array is: "<<large<<endl;
    cout<<"smallest value in array is: "<<small<<endl;


    return 0;
}