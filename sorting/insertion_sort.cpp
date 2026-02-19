#include<iostream>
#include<algorithm>

using  namespace std;
//insertion sort always check the left side of the array and if the left is smaller then the right it swaps them

int insertion_sort(int arr[] , int n){
 for(int i = 0 ; i <n-1 ; i++){
        for(int j= 0 ;j <n-i-1 ; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j] , arr[i]);
            }
        }
    }
    return 0;
}

int main(){

    int arr[]={2,1,5,8,9};
     int n = 5;
   

    cout<<"the bubble sort is :";
    insertion_sort(arr , n);
    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}