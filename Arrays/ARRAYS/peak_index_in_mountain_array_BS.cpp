#include<iostream>
#include<vector>

using namespace std;
int peak_element_mountain(vector<int>&vec){
    int start = 0 ; 
    int end = vec.size() - 1;

    while(start <= end){

        int mid = start + (end - start) / 2;
         if(vec[mid-1] < vec[mid] && vec[mid] > vec[mid + 1]){
            return mid;
         }else if(vec[mid - 1] < vec[mid]){
            start = mid + 1;
         }else{
            end = mid - 1;
       }     
    }
    return -1;
}
int main(){

    vector<int>vec={0,3,8,9,10,5,2,1};
    cout<<"the result : "<<peak_element_mountain(vec);

    return 0;
}