#include<iostream>
#include<vector>
#include<climits>
using namespace std;

vector<int>pairSum(vector<int>nums , int target){
    int n=nums.size();
    vector<int>ans;

    for(int i = 0 ; i< n; i++){
        for(int j = i+1; j<n ; j++){
            if(nums[i]+nums[j]==target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
}

int main(){
    vector<int> vec={5,3,2,8,6};
    int target=9;

    //is used to find the pair sum
    vector<int>ans=pairSum(vec,target);
    cout<<ans[0]<<" , "<<ans[1];

    return 0;
}