#include<iostream>
#include<algorithm>
#include<climits>

using namespace std;

int the_diagonal_sum_is(int matrix[][3] , int row , int col , int n){//O(n^2)
    int sum=0;
    for(int i=0; i < n ; i++){
        for(int j =0 ; j < n ; j++){
            if(i==j){
                sum+=matrix[i][j];
            }else if(j == n-1-i){
                sum+=matrix[i][j];
            }
        }
    }
    return sum; 
}

//reduse the tc into O(n)
// for(int i =0 ; i < n ; i++){
//     int sum=0;
//     sum+=matrix[i][j];
//     if(i != n-1-i){
//         sum+=matrix[i][n-1-i];
//     }
// }
int main(){
   
    int matrix[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int r =3;
    int c = 3;
    int n =3;

    cout<<"the diagonal sum is : "<<the_diagonal_sum_is(matrix , r , c , n);
    return 0;
}