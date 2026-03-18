#include<iostream>
#include<vector>
#include<climits>
using namespace std;

vector<int> pairSum(vector<int>nums , int target){
    vector<int>ans;
    int n=nums.size();

    int i=0 , j = n-1;

    while(i<j){
        int pairSum=nums[i]+nums[j];
        if(pairSum>target){
            j--;
        }
        else if(pairSum<target){
            i++;
        }
        else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;
}

int main(){

    vector<int>vec={2,3,2,5,7,1};
      int t=8;
    vector<int>ans=pairSum(vec,t);
    cout<<ans[0]<<" , "<<ans[1];

    return 0;
}