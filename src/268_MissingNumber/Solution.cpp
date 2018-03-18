//
// Created by Eric Liang on 3/17/18.
//

#include <leetcode.h>

int missingNumber(vector<int>& nums) {
    int sum = 0;
    for (auto& num: nums){
        sum+=num;
    }
    int n = nums.size();
    int supposed = n * (n+1) / 2;
    return supposed - sum;
}

int main(){

}
