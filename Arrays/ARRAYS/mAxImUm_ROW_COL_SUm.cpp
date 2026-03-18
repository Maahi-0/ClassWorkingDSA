#include<iostream>
#include<climits>
#include<vector>
using namespace std;

int get_max_sum_of_row(int matr[][3], int rw ,int col){
     int max_sum = INT_MIN;
     for(int i = 0 ; i < rw ; i++){
        int row_sumi=0;
        for(int j = 0 ; j < col ; j++){
            row_sumi += matr[i][j];
        }
        max_sum = max(max_sum , row_sumi);
     }
  return max_sum;
}
int get_max_sum_of_cloumn(int matr[][3], int rw ,int col){
     int max_sum = INT_MIN;
     for(int i = 0 ; i < rw ; i++){
        int row_sumi=0;
        for(int j = 0 ; j < col ; j++){
            row_sumi += matr[j][i];
        }
        max_sum = max(max_sum , row_sumi);
     }
  return max_sum;
}


int calculating_the_overall_row_sum(int mat[][3] , int r , int c){
    int ans=0;
    for(int i = 0 ; i <r ; i++){
        for(int j = 0 ; j  < c ;  j ++){
            ans+=mat[i][j];
        }
    }
    return ans;
}

int calculating_the_overall_col_sum(int mat[][3] , int r , int c){
    int ans=0;
    for(int i = 0 ; i <r ; i++){
        for(int j = 0 ; j  < c ;  j ++){
            ans+=mat[j][i];
        }
    }
    return ans;
}

int both_sum(int mat[][3] , int r , int c){
    int an=0;
    an=calculating_the_overall_col_sum(mat ,r,c)+calculating_the_overall_row_sum(mat , r,c);
    return an;
}

int calculating_the_overall_row_multiplication(int mat[][3] , int r , int c){
    int ans=1;
    for(int i = 0 ; i <r ; i++){
        for(int j = 0 ; j  < c ;  j ++){
            if(mat[i][j] != 0){
                ans*=mat[i][j];
            }
        }
    }
    return ans;
}

int main(){
    int matrix[3][3]={{2,6,4},{2,6,8},{9,6,3}};
    int r =3 , c = 3;
   
      cout<<"the max of row sum is : "<<get_max_sum_of_row(matrix, r , c)<<endl;
      cout<<"the max of column sum is : "<<get_max_sum_of_cloumn(matrix, r , c)<<endl;
      cout<<endl;
      cout<<"the row sum is : "<<calculating_the_overall_row_sum(matrix, r , c)<<endl;
      cout<<endl;
      cout<<"the col sum is : "<<calculating_the_overall_row_sum(matrix, r , c)<<endl;
      cout<<endl;
      cout<<"the row multiplication is : "<<calculating_the_overall_row_multiplication(matrix, r , c)<<endl;

        cout<<endl;
      cout<<"the col ans row sum is : "<<both_sum(matrix, r , c)<<endl;
    return 0 ;
}

