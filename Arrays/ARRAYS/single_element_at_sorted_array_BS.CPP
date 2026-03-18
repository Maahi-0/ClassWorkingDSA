#include<iostream>
#include<vector>

using namespace std;
//with linear search 0(n)
int SINGLE_ELEMENT_AT_SORTED_ARRAY(int vec[] , int size){
     int ans =0;
    for(int i=0 ; i<size ;i++){
      ans = ans ^ vec[i]; 
    } 
    return ans;   
}

// with binary search 0(log n)
int binary_search_single_element_in_sorted(vector<int>&vec){

}
int main(){

int vec[10]={1,2,2,3,3,4,4,8,8};
    cout<<"the result : "<<SINGLE_ELEMENT_AT_SORTED_ARRAY(vec,10);

    return 0;
}