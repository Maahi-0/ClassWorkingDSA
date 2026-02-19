#include<iostream>
#include<algorithm>
#include<vector>

using  namespace std;

int finding_pivot_element(vector<int>&nums){
 int total =0 ;
 for(int i = 0 ; i<nums.size() ; i++){
    total+=nums[i];
 }
 int left_sum = 0;
 for(int i = 0; i <nums.size() ; i++){
    int right_sum = total-left_sum-nums[i];
    if(left_sum == right_sum){
        return i;
    }
    left_sum += nums[i];
 }
    return -1;
}

int main(){

    vector<int>vec={12,4,5,6,8}
    cout<<"the pivot elemnt is :";
finding_pivot_element(vec);

  
    return 0;
}