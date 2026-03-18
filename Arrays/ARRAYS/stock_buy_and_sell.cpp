#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int stock_b_s(vector<int>&price){
    int n = sizeof(price);
    int best_price=price[0];
    int max_price=0;

    for(int i = 0 ; i< n ; i++){
        if(price[i]>best_price){
            max_price=max_element(max_price,price[i]-best_price);
        }

        best_price= min_element(best_price,price[i]);
    }
    return max_price;
}

int main(){
     vector<int>vec={7,1,5,3,6,4};

     cout<<"the answeer is : "<<stock_b_s(vec);
    return 0;
}