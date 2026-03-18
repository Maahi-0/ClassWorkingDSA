#include<iostream>
#include<vector>

using namespace std;
bool isvalid(vector<int>&vec , int n , int m , int maximum_allowed_pages){
    int student = 1;
    int pages = 0;

    for(int i = 0 ; i< n ; i++){
        if(vec[i] > maximum_allowed_pages){
            return false;
        }
        if(pages + vec[i] <= maximum_allowed_pages){
            pages+=vec[i];
        }else{
            student++;
            pages = vec[i];
        }
    }
    return student > m ? false : true ;

}
int book_allocation(vector<int>&vec , int n , int m){

    if(m > n){
        return -1;
    }

    int sum= 0;
    for(int i = 0 ; i < n ; i++){
        sum+=vec[i];
    }
    
    int ans = -1;
    int start = 0 ;
    int end = sum;//range of possible answaers

    while(start <= end){
        int mid = start + (end - start) / 2;

        if(isvalid(vec , n ,  m , mid)){//valide
            ans = mid;
            end = mid -1;
        }else{//invalide
            start = mid +1;
        }
    }
    return ans;
}
int main(){
  vector<int>vec={2,1,3,4};
  int n=4,m=2;
  //n is the number of books 
  //m is the number of students
  cout<<book_allocation(vec,n,m);

    return 0;
} 