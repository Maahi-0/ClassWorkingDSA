#include<iostream>
#include<unordered_set>
#include<vector>
 
using namespace std;

int find_duplicete_value(vector<int>&arr){

     unordered_set<int>s;

     for(int val : arr){
        if(s.find(val) != s.end()){
            return val;
        }

        s.insert(val);
     }

}

int slow_fast_pointer_for_duplicate_element(vector<int>&ar){//O(n) 
    //imagine an array as a linked list 

    int slow = ar[0] , fast = ar[0];

    do{
        slow = ar[slow];//+1
        fast = ar[ar[fast]];//+2
    } while(slow != fast);

    slow = ar[0];

    while(slow != fast){
        slow = ar[slow];
        fast = ar[fast];
    }

    return fast;

}


int main(){

  vector<int>vec={3,1,3,4,2};
  cout<<"the answer is : "<<find_duplicete_value(vec)<<endl;
    cout<<"the answer is : "<<slow_fast_pointer_for_duplicate_element(vec);
return 0;
}