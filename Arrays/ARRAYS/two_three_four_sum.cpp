#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;

vector<vector<int>>four_sum(vector<int>&arr , int target , int n){
    sort(arr.begin() , arr.end());
    vector<vector<int>>ans;

    for(int i = 0; i < n ; i++){
         if(i > 0 && arr[i] == arr[i-1]) continue;
       for(int j = i + 1 ; j < n ;){
     int p = j + 1;
     int q = n - 1;

     while(p < q){
       long sum = arr[i] + arr[j] + arr[p] + arr[q];

       if(sum < target){
        p++;
       }
       else if(sum > target){
        q--;
       }
       else{
        ans.push_back({arr[i] , arr[j] , arr[p] , arr[q]});
        p++;q--;

              while(p < q && arr[p] == arr[p -1]) p++;
            //  while(p < q && arr[q] == arr[q+1]) q--;
               //
       }
     }
     j++;
     while(j < n && arr[j] == arr[j -1]) j++;
      return ans;
   }
 } 
}

vector<int>two_sum(vector<int>&vec , int target , int n){

  sort(vec.begin() , vec.end());

  vector<int>ans;

  int start = 0;
  int end = n -1;

  while(start <= end){

    int sum = vec[start] + vec[end];

     if(sum > target){
            end--;
        }
        else if(sum < target){
            start++;
        }
        else{
            ans.push_back(start);
            ans.push_back(end);

            return ans;
        }
    }
}

int main(){

    vector<int>vec={-2 , -1 , -1 , 1 , 1 , 2 , 2};
    int n = vec.size();
    int target = 0;

    vector<vector<int>>ans=four_sum(vec , target , n);
   for(auto ns : ans ){
        cout << ns[0] <<" , "<<ns[1] <<" , "<<ns[2] <<" , "<<ns[3];
    }


    return 0;
}

// #include<iostream>
// #include<vector>
// #include<algorithm>

// using namespace std;

// vector<int>two_sum(vector<int>&vec , int target , int n){
//     sort(vec.begin() , vec.end());

//     vector<int>ans;

//     int start = 0;
//     int end = n - 1;

//     while(start <= end){
//         int sum = vec[start] + vec[end];

//         if(target > sum){
//             start++;
//         }else if (target < start){
//             end--;
//         }else{
//             ans.push_back(start);
//             ans.push_back(end);

//             return ans;
//         }
        
//     }
// }
// vector<vector<int>>three_sum(vector<int>&ve , int target , int n){

//     sort(ve.begin() , ve.end());
//     vector<vector<int>>ans1;

//     for(int i = 0; i < n ; i ++){
//         if(i > 0 && ve[i] == ve[i-1]) continue;

//     int j = i +1;
//     int k = n -1;

//     while(j < k){
//         int sum= ve[i] + ve[j] + ve[k];

//         if(target > sum){
//             j++;
//         }else if(target < sum){
//             k--;
//         }else{
//             ans1.push_back({ve[i] , ve[j] , ve[k]});
//             j++;k--;
//             while(j < k && ve[j] == ve[j-1]) j++;
//             while(j < k && ve[k] == ve[k+1]) k--;
//         }
//       }
//     }
//     return ans1;

// }
//vector<int>four_sum(vector<int>&arr , int target , int n){


// }

// int main(){

//     return 0;
// }