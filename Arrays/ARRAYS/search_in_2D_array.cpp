#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool linear_search_in_2d_vector(vector<vector<int>>matrix , int target){
    for(int i = 0; i< matrix.size() ; i++){
        for(int j = 0 ; j<matrix[i]. size() ; j++){
            if(matrix[i][j]==target){
                return true;
            }
        }
    }
    return false;
}   


bool search_in_row(vector<vector<int>>&mat , int target , int row){
    int n = mat[0].size();
    int start = 0;
    int end = n- 1;

    while(start <= end){
        int mid =  start + (end - start) /2;

        if(target == mat[row][mid]){
            return true;
        }else if(target > mat[row][mid]){
          start = mid +1;
        }else{
            end = mid -1;
        }
    }
    return false;
}
bool serach_bs(vector<vector<int>>&mat , int target){

    int m = mat.size();//rows
    int n = mat[0] .size();//col
    int startrow=0 , endrow = n-1;

    while(startrow <= endrow){
        int midrow = startrow + (endrow - startrow) / 2;

        if(target >= mat[midrow][0] && target >= mat[midrow][n-1]){
            return search_in_row(mat , target , midrow);
        }else if(target >= mat[midrow][n-1]){
            // down --> right
            startrow = midrow + 1;
        }else{
            // up--> left
            endrow = midrow -1;
        }

    }
    return false;

}


bool serach_in_2d_matrix_II(vector<vector<int>>mat , int target){
//m : rows
//n : columns
    int m = mat.size() , n = mat[0].size();
      
    int r = 0 , c = n-1;
    while(r < m && c >= 0){
      
        if(target == mat[r][c]){
            return true;
        }
        else if(target < mat[r][c]){
            c--;
        }
        else{
            r++;
        }
    }
    return  false;
}

int main(){

    vector<vector<int>>matrix={{1,3,5,7},{10,11,16,20},{23,30,34,60}};
   
    int target = 55;
//0 :false
//1 : true
   cout<<"the answar is : "<<serach_bs(matrix , target)<<endl;

   vector<vector<int>>mat={{1,4,7,11,15},{2,5,8,12,19},{3,6,9,10,22},{10,13,14,17,24},{18,21,23,26,30}};
   int target1=5;
   cout<<"the answar is : "<<serach_in_2d_matrix_II(mat,target1);
   

    return 0;
}
