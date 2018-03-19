//
// Created by Eric Liang on 3/18/18.
//

#include <leetcode.h>

void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    reverse(nums.begin(),nums.begin()+n);
    reverse(nums.begin(),nums.begin()+k%n);
    reverse(nums.begin()+k%n,nums.begin()+n);
}

int main(){

}
