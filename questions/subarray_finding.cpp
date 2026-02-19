#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){
    //kadans algo is used to find the sub array sum
    vector<int>vec={3,4,-1,4,5,2,1,7,-8};
     int currentSum=0;
     int maxSum=INT_MIN;
    for(int value : vec){
           
        currentSum+=value;
        maxSum=max(currentSum,maxSum);

        if(currentSum<0){
            currentSum=0;
        }
    }

    cout<<"the sub array sum is : "<<maxSum;

    return 0;
}