#include<iostream>
#include<vector>
#include<set>
#include<algorithm>


using namespace std;

vector<vector<int>>brute_force_three_sum(vector<int>&vec , int n){
    vector<vector<int>>ans;

    set<vector<int>>s;

      for(int i = 0; i < n ; i++){
        for(int j = i + 1 ; j < n ; j++ ){
            for( int k  = j+ 1 ; k <n ; k++){
                if( vec[i] + vec[j] + vec[k] == 0){

                 vector<int>trip={vec[i] , vec[j] , vec[k]};
                 sort(trip.begin() , trip .end());

                 if(s.find(trip) == s.end()){
                    s.insert(trip);
                    ans.push_back(trip);
                    return ans;
                  }
                }
            }
        }
    }
}

vector<vector<int>>optimal_approach_3sum(vector<int>&vec , int target , int n){

   

    set<vector<int>>unique_triplets;
    for(int i = 0 ; i  < n ; i++){
        target = -vec[i];
        set<int>s;
        for(int  j = i +1 ; j < n; j++){
             int tofind = target - vec[j];

             if(s.find(tofind) != s.end()){
                vector<int>trip = {vec[i] , vec[j] , tofind};
               
                sort(trip.begin() , trip.end());
                
                    unique_triplets.insert(trip);
                   
            }
            s.insert(vec[j]);
        }
    }

    vector<vector<int>>ans(unique_triplets.begin() , unique_triplets.end());
    return ans;
}
int main(){

vector<int>vec={-1 , 0 , 1 , 2, -1 , -4};
int n = vec.size();

   cout<<"the optimal  approch is : ";
    vector<vector<int>>triplets=brute_force_three_sum(vec,n);
   
    for(auto ns : triplets ){
        cout << ns[0] <<" , "<<ns[1] <<" , "<<ns[2];
    }

return 0;
}
