#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool is_possible(vector<int>&vec ,int n,int c, int mid){//O(n)

  int cow=1;
  int last_stall_position=vec[0];
    for(int i = 1; i < n ; i++){
        if(vec[i] - last_stall_position >= mid){
           cow++;
           last_stall_position=vec[i];
        }
       if(cow==c){
        return true;
       }
    }
    return false;
}

int aggressive_cow_problem(vector<int>&vec , int n ,int c){
    sort(vec.begin() , vec.end());
    int start = 1;//low
    int end = vec[n-1]-vec[0];
    int ans = -1;

    while(start <= end){
        int mid = start  + (end - start) / 2;

        if(is_possible(vec ,n,c, mid)){//possible
            ans = mid;
            start = mid + 1;
        }else{
            end = mid - 1;
        }
    }
    return ans;
}
int main(){
    vector<int>a={1,2,8,4,9};
    int n = 5;
    int c= 3;
    cout<<"the answaer is : "<<aggressive_cow_problem(a,n,c);

    return 0;
}