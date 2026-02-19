#include<iostream>
#include<vector>
using namespace std;
int binary_search(int vec[] ,int size ,int target){
    int start=0;
    int end=size-1;

    while(start <= end){

        int mid= start + (end - start)/ 2;

        if(target==vec[mid]){
            return mid;
        }
        else if(target > vec[mid]){
            start = mid + 1;//second half
        }
        else {
            end = mid - 1;//first half
        }
    }
    return -1;
}
int main(){
    int vec[7]={-1,0,3,4,5,9,12};
    int target=22;
    cout<<"the binary search answer is : "<<binary_search(vec,7,target);
    return 0;
}



