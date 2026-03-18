#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int most_water_conatiner(vector<int>&height){
    int max_water=0;
    int left_bound , right_bound;

    while(left_bound < right_bound){

        int width = right_bound - left_bound;
        int height_main = min(height[left_bound] , height[right_bound]);
        int current_water = width * height_main;
        max_water = max(max_water , current_water); 

        height[left_bound] < height[right_bound] ? left_bound++ : right_bound--;
    }

        return max_water;
}

int main(){
    
    vector<int>vec={1,8,6,2,5,4,8,3,7};
    cout<<"the conatiner with most water capacity is : "<<most_water_conatiner(vec);
    return 0;
}