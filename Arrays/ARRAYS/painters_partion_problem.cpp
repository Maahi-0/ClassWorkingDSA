#include<iostream>
#include<vector>

using namespace std;

bool isvalid(vector<int>&a ,int bords ,int painters , int mid){
    int painter_virtual = 1;
    int time = 0;

    for(int i = 0 ; i< bords ; i++){

        if(a[i] > mid){
            return false;
        }
        if(time + a[i] <= mid){
            time += a[i];
        }else{
            painter_virtual++;
            time = a[i];
        }
    }
    return painter_virtual > painters ? false : true; 
}

int painters_partion_problem(vector<int>&a ,int n ,int m){

    if(m > n){
        cout<<"sorry it can not posibe ";
        return -1;
    }
    int sum = 0;
    int ans = -1;

    for(int i = 0 ; i < n ; i++){
        sum+=a[i];
    }
    int start = 0;
    int end = sum;

    while(start <= end){

        int mid = start + (end - start) / 2;

        if(isvalid(a , n , m , mid)){//valid
             ans = mid;
             end = mid -1;
        }else{
            start = mid +1;
        }
    }
    return ans;
}

int main(){

    vector<int>vec={40,30,10,20};
    int n = 4;
    int m=2;

    cout<<"the answaer is : "<<painters_partion_problem(vec , n , m);

    return 0;
}