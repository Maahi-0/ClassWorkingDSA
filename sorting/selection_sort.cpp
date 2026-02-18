#include<iostream>
#include<algorithm>

using  namespace std;

//selection sort assum that the first element of the array is always minimam 

int selection_sort(int arr[] , int n){
 for(int i = 0 ; i <n ; i++){
    int min = i;
        for(int j= i +1  ;j <n ; j++){
            if(arr[j] < arr[min]){
                min=j;
            }
        }
         swap(arr[i] , arr[min]);
    }
    return 0;
}

int main(){

    int arr[]={0,2,4,6,1,5,8,9};
     int n = 8;
   

    cout<<"the selection  sort is :";
    selection_sort(arr , n);
    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}