#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
bool linear_search(int matrix[][3], int rows , int col , int key){
     for(int i = 0 ; i <rows ; i++){
        for(int j = 0 ; j < col ; j++){
            if(matrix[i][j]==key){
                return true;
            }
        }
     }
     return false;
}

pair<int,int>linear_serach_returning_pari(int arr[][3] ,int r , int c , int t  ){
    for(int i = 0 ; i<r ; i++){
        for(int j =0 ; j< c; j++){
            if(arr[i][j]==t){
                return make_pair(i,j);
            }
        }
    }
    return make_pair(-1,-1);
}

int main(){
   
    

    //initialization
    int matixes[4][3] ={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    int row = 4;//size of the row
    int cols = 3;
    // if(linear_search(matixes , row , cols ,  8 )){
    //     cout<<"yess its find";
    // }else{
    //     cout<<"not found";
    // }
 
  pair<int,int>index=linear_serach_returning_pari(matixes,row,cols,9);
    if(index.first != -1 && index.second != -1){
        cout<<" is found at "<<"("<<index.first<<" "<<index.second<<")"<<endl;
    }else{
        cout<<"not found"<<endl;
    }



    int arr[5][3]={{1,2,3},{4,3,2},{5,6,7},{5,0,9},{1,7,6}};
    for(int i=0;i<5;i++){
        for(int k=0; k<3;k++){
            cout<<arr[i][k]<<" ";
        }
        cout<<endl;
    }

     char arr2[5][3]={{'A','B','C'},{'D','E','F'},{'G','H','I'},{'J','K','L'},{'M','N','O'}};
    for(int i=0;i<5;i++){
        for(int k=0; k<3;k++){
            cout<<arr2[i][k]<<" ";
        }
        cout<<endl;
    }


    vector<int>vec={1,2,3,4,5,6};
    
    return 0;
}