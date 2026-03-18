#include<iostream>

using namespace std;

int reverse_an_array(int arr[] , int size){
    int start=0;
    int end=size-1;

    while (start<end){
            swap(arr[start],arr[end]);
              start++;
               end--;
    }
}

int main(){
      int arr[5]={1,2,3,4,6};
      int size=5;
      reverse_an_array(arr,size);
      for(int i = 0 ; i< size ; i++){
        cout<<arr[i]<<" ";
      }
      cout<<endl;
    return 0;
}