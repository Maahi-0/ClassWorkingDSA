#include<iostream>
using namespace std;

bool liner_search(int arr[][3] , int r , int c , in key){
    for(int  i = 0 ; i < r ; i++){
        for(int  j = 0 ; j < c ; j++){
            if(arr[i][j]==key){
                return true;
            }
        }
    }
    return false;
}

int max_row_sum(int arr[][3] , int c , int r ){
    int max_sum = INT_MIN;

    for(int i = 0; i< r ; i++){
        int sum = 0;
        for(int j = 0 ; j <c ; j++){
         sum += arr[i][j];
        }

        max_sum= max(max_sum , sum);
    }
    return max_sum;
}

int diagonal_sum(int arr[][4] , int r , int c ){
    int sum = 0;
    for(int i = 0 ; i< r ; i++){
        for(int j = 0 ; j < c ; j++){
            if(i==j){
                sum += arr[i][j];
            }else if(j==n-1-i){
                sum+=arr[i][j];
            }
        }
    }
    return sum;
}
bool search_in(vector<vector<int>>matri , int row , int target){
    int n = matri[row].size();
    int start = 0;
    int end = n-1;

    while(start <= end){
        int mid = start + (end - start) / 2;
        if(matri[row][mid] == target){
            return true;
        }
        else if(matri[row][mid] < target){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return false;
}
bool bs_on_vector(vector<vector<int>matri , int target ){
    int m = matri.size();
    int n = matri[0].size();

    int  start = 0 ;
     int end = m-1;


     while(start<=end){
        int mid = start + (end - start) / 2;

        if(target >= matri[mid][0] && targte <= matri[mid][n-1]){
search_in(matri , m ,target) 
        }else if(target > matri[mid][n-1]){
            start =mid+1;
        }else{
            end = mid -1;
        }
     }

}
int main(){
    
    


    return 0;
}