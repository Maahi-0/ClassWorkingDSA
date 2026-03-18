#include<iostream>
#include<vector>

using namespace std;

vector<int>finding_product_of_aray(vector<int>&nums){
    int n= nums.size();
    vector<int>ans;
    vector<int>suffix(n,1);


    //prefix
     for(int i = 0 ; i< n; i++){
        ans[i] = ans[i-1] * nums[i-1];
    }

    //suffix
    for(int i = n-2 ; i>=0 ; i--){
        suffix[i] = suffix[i+1] * suffix[i+1];
        ans[i] *=suffix[i];
    }
          return ans;
}
int main(){

    vector<int>vec={1,2,3,4};
    cout<<"the product of the array elements except itself : ";
    finding_product_of_aray(vec);

    return 0;
}