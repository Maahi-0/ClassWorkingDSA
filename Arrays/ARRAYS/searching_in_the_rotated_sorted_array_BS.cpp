#include<iostream>
#include<vector>
using namespace std;
int search_in_rotated_sorted_array(vector<int>&vec, int target){
       int start =0;
    int end = vec.size()-1;
    while( start <= end ){
        int mid = start + (end -start) / 2;
        
        if (vec[mid] == target){
            return mid;
        }
        //now checking whether the left half is sorted or right half is sorted

        //for left half
        if(vec[start] <= vec[mid]){
            if(vec[start] <= target && target <= vec[mid]){
                end = mid - 1 ;
            }else{
                start = mid + 1;
            }
    
        }else{//for right half
            if(vec[mid] <= target && target <= vec[end]){ 
                start = mid + 1;
            }else{
                end = mid - 1 ;
            }
        }
     } 
     return -1;    
}
int main(){
    vector<int>arr={3,4,5,6,7,0,1,2};
    int target = 10;



    cout<<"the result is : "<<search_in_rotated_sorted_array(arr, target);

    return 0;
}