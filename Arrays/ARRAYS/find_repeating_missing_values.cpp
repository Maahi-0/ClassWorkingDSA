#include<iostream>
#include<unordered_map>
#include<unordered_set>
#include<vector>

using namespace std;


vector<int>finding_the_repeating_and_missing_value(vector<vector<int>>&grid){

    int a ,b;
    int n= grid.size();
    vector<int>ans;
     int actual_sum=0;
     int expected_sum=0;
    unordered_set<int>s;

    for(int i=0; i < n ;i++){

      for(int  j=0; j < n ;j ++){
        actual_sum+=grid[i][j];

        if(s.find(grid[i][j]) != s.end()){
            a= grid[i][j];
            ans.push_back(a);
        }
        s.insert(grid[i][j]);
      }
    }

    expected_sum = (n*n) * (n*n + 1) / 2;
        b = expected_sum + a - actual_sum;
        // b =  45 + 9 - 49 = 5;
        ans.push_back(b);
        return ans;
}
int main(){
vector<vector<int>>vec={{9,1,7},{8,9,2},{3,4,6}};

cout<<"the answer is : ";
    vector<int>ans2=finding_the_repeating_and_missing_value(vec);
    cout<<ans2[0] << " "<<ans2[1];
return 0;
}